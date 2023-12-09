#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu()
{
	printf("1. Display original\n");
	printf("2. Display with rightwards rotation\n");
	printf("3. Display with leftwards rotation\n");
	printf("4. EXIT\n");
}

void display(FILE* inp, char pic[300][300], int rows, int columns);
void rightWards(char pic[300][300], int rows, int columns);
void leftWards(char pic[300][300], int rows, int columns);

int main(void)
{
	FILE* inp;
	inp = fopen("robot.txt", "r");
	if (inp == NULL)
		printf("Error");
	else {
		int num, r = 0, c = 0;
		char pic[300][300], status;
		
		status = fscanf(inp, "%c", &pic[r][c]);
		while (status != EOF)
		{
			if (pic[r][c] == '\n')
			{
				c = -1;
				r++;
			}
			c++;
			status = fscanf(inp, "%c", &pic[r][c]);
		}

		do {
			menu();

			do {
				printf("Enter choice: ");
				scanf("%d", &num);
			} while (num < 1 || num > 4);

			switch (num)
			{
			case 1:
				display(inp, pic, r, c);
				break;
			case 2:
				rightWards(pic, r, c);
				break;
			case 3:
				leftWards(pic, r, c);
				break;
			}

		} while (num != 4);
	}
	return 0;
}

void display(FILE* inp, char pic[300][300], int rows, int columns)
{
	printf("\nORIGINAL PICTURE\n");

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			printf("%c", pic[i][j]);

		printf("\n");
	}
	printf("\n");
}

void rightWards(char pic[300][300], int rows, int columns)
{
	printf("\nPICTURE RIGHT-ROTAED\n");
	for (int i = 0; i < columns; i++)
	{
		for (int j = rows - 1; j >= 0; j--)
			printf("%c", pic[j][i]);
	
		printf("\n");
	}
}

void leftWards(char pic[300][300], int rows, int columns)
{
	printf("\nPICTURE LEFT-ROTATED\n");
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
			printf("%c", pic[j][i]);
		printf("\n");
	}
	printf("\n");
}
