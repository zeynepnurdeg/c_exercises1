#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9

void readFromFile(FILE* inp, int arr[SIZE][SIZE]);
void displayTwoDimension(int arr[SIZE][SIZE]);
void displayDimension(int arr[SIZE][SIZE]);

int main(void)
{
	FILE* inp; 
	inp = fopen("words.txt", "r");
	if (inp == NULL)
		printf("Error");
	else
	{
		int arr[SIZE][SIZE];
		readFromFile(inp, arr);
		displayTwoDimension(arr);
	}
	return 0;
}

void readFromFile(FILE* inp, int arr[SIZE][SIZE])
{
	int letter_value;
	int r = 0, c = 0;

	while (fscanf(inp, "%c", &letter_value) != EOF)
	{
		arr[r][c] = letter_value;
		c++;

		if (c == 9)
		{
			r++;
			c = 0;
		}
	}
}

void displayTwoDimension(int arr[SIZE][SIZE])
{
	for (int r = 0; r < SIZE; r++)
		for (int c = 0; c < SIZE; c++)
			printf("%c", arr[r][c]);
}