
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int arr[SIZE][SIZE] = { 0 }, r, c;
	for (r = 0; r < SIZE; r++)
		arr[r][r] = 1;

	printf("MAJOR DIAGONAL\n");
	printf("**************\n");
	for (r = 0; r < SIZE; r++)
	{
		for (c = 0; c < SIZE; c++)
			printf("%3d", arr[r][c]);
		printf("\n");
	}
	printf("\n");

	for (r = 0; r < SIZE; r++)
		arr[r][2 - r] = 1;

	printf("MAJOR AND MINOL DIAGONAL\n");
	printf("************************\n");
	for (r = 0; r < SIZE; r++)
	{
		for (c = 0; c < SIZE; c++)
			printf("%3d", arr[r][c]);
		printf("\n");
	}
	return 0;
}