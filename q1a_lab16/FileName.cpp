
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int arr[SIZE][SIZE] = { {45, 99, 64}, {76, 20, 67}, {35, 77, 23} };

	for (int r = 0; r < SIZE; r++)
	{
		for (int c = 0; c < SIZE; c++)
			printf(" %d ", arr[r][c]);
		printf("\n");
	}
	return 0;
}