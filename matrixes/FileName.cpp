
#include <stdio.h>

/*int main(void)
{
	int A[2][3] = { 1,2,3,4,5,6 }, B[2][3] = { 7,8,9,10,11,12 }, C[2][3], r, c;
	for (r = 0; r < 2; r++)
		for (c = 0; c < 3; c++)
		{
			C[r][c] = A[r][c] + B[r][c];
			printf(" %d ", C[r][c]);
		}

	return 0;
}*/
/*
int main(void)
{
	int M[5][5] = { 0 }, r, c;
	for(r = 0; r < 5; r++)
		for (c = 0; c <= r; c++)
			M[r][c] = 1;
		
	for (r = 0; r < 5; r++)
	{
		for (c = 0; c < 5; c++)
			printf(" %d ", M[r][c]);
		printf("\n");
	}
	return 0;
}*/
/*
int main(void)
{
	int A[2][3] = { 1,2,3,4,5,6 }, B[3][2];
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			B[r][c] = A[c][r];
			printf(" %d ", B[r][c]);
		}
		printf("\n");
	}
	return 0;
}*/

int main(void)
{
	int M[5][5] = {0};
	for (int r = 0; r < 5; r++)
	{
		M[r][r] = 1;
		M[r][4 - r] = 1;
	}

	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 5; c++)
			printf(" %d ", M[r][c]);
		printf("\n");
	}
	return 0;
}