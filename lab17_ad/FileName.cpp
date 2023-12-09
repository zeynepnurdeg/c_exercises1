#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_dia(FILE* inp, int rel[][3], int matrix[][4]);
int isSymmetric(int rel[][3]); //1 if symmetric, else is 0
void display(int rel[][3], int reflexive, int symmetry); //displays symmetric if 1, if 0 its not symmetric

int main(void)
{
	FILE* inp;
	inp = fopen("relation.txt", "r");
	if (inp == NULL)
		printf("Error");
	else
	{
		int rel[10][3], matrix[4][4] = { 0 }, reflexive;
		reflexive = check_dia(inp, rel, matrix);

		int sym;
		sym = isSymmetric(rel);

		display(rel, reflexive, sym);
	}
	return 0;
}

int check_dia(FILE* inp, int rel[][3], int matrix[][4])
{
	int r = 0, c = 0, num;
	while (fscanf(inp, "%d", &num) != EOF)
	{
		rel[r][c] = num;
		c++;
		if (c == 3)
		{
			r++;
			c = 0;
		}
	}

	c = 0;
	for (int r = 0; r < 10; r++)
	{
		matrix[ rel[r][c] - 1 ][ rel[r][c + 1] - 1 ] = 1;
	}

	for (int r = 0; r < 4; r++)
		if (matrix[r][r] != 1)
			return 0;

	return 1;
}

int isSymmetric(int rel[][3]) //1 if symmetric, else is 0
{
	for (int r = 0; r < 4; r++)
	{
		if (rel[r][0] != rel[r][3] || rel[r][1] != rel[r][2])
			return 0;
	}
	return 1;
}

void display(int rel[][3], int reflexive, int symmetry) //displays symmetric if 1, if 0 its not symmetric
{
	printf("Matrix of The Realtaion\n");
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
			printf("%3d", rel[r][c]);
		printf("\n");
	}

	if (reflexive == 1)
		printf("\nRelation is reflexive\n");
	else
		printf("\nRelation is not reflexive\n");

	if (symmetry == 1)
		printf("\nRelation is symmetric\n");
	else
		printf("\nRelation is not symmetric\n");
}
