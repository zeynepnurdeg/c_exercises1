#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readFromFile(FILE* inp, double M[][4]);

void forSwap(double M[][4], double swap[]);

void display(double M[][4]);

int main(void)
{
	FILE* inp;
	inp = fopen("matrix.txt", "r");
	if (inp == NULL)
		printf("Error");
	else
	{
		double M[7][4];
		readFromFile(inp, M);

		double swap[4];
		forSwap(M, swap);

		display(M);
	}
	return 0;
}

void readFromFile(FILE* inp, double M[][4])
{
	int r = 0, c = 0;
	while (fscanf(inp, "%lf", &M[r][c]) != EOF)
	{
		c++;
		if (c == 4)
		{
			c = 0;
			r++;
		}
	}
}

void forSwap(double M[][4], double swap[])
{
	int n1, n2;
	do {
		printf("Enter two rows to swap: ");
		scanf("%d %d", &n1, &n2);
	} while (n1 > 7 || n1 < 1 || n2 > 7 || n2 < 1);

	for (int c = 0; c < 4; c++)
	{
		swap[c] = M[n1][c];
		M[n1][c] = M[n2][c];
		M[n2][c] = swap[c];
	}
}

void display(double M[][4])
{
	for (int r = 0; r < 7; r++)
	{
		for (int c = 0; c < 4; c++)
			printf("%5.1f  ", M[r][c]);
		printf("\n");
	}
}
