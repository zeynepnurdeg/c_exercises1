#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main(void)
{
	int arr[SIZE][SIZE], r = 0, c = 0;
	FILE* inp;
	inp = fopen("nums.txt", "r");
	if (inp == NULL)
		printf("Error");
	else
	{
		int num;
		while (fscanf(inp, "%d", &num) != EOF)
		{
			arr[r][c] = num;
			c++;
			if (c == SIZE)
			{
				r++;
				c = 0;
			}
		}
		fclose(inp);
		for (r = 0; r < SIZE; r++)
		{
			for (c = 0; c < SIZE; c++)
				printf(" %3d ", arr[r][c]);
			printf("\n");
		}
	}
	return 0;
}