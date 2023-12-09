#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int arr[3][3], r, c;

	for (r = 0; r < SIZE; r++)
		for (c = 0; c < SIZE; c++)
		{
			printf("Enter the value for cell [%d][%d] : ", r, c);
			scanf("%d", &arr[r][c]);
		}

	for (r = 0; r < SIZE; r++)
	{
		for (c = 0; c < SIZE; c++)
			printf(" %d ", arr[r][c]);
		printf("\n");
	}
	return 0;
}