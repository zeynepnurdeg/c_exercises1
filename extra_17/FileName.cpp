#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, k = 0;
	char text[100];

	printf("Please enter a text (. to stop): ");
	while(scanf("%c", &text[k])) {
		if (text[k] == '.')
			break;
		k++;
	}

	do {
		printf("Please enter the key ize (2 - 20): ");
		scanf("%d", &num);
	} while (num < 2 || num > 20);

	for (int i = 1; i <= num; i++)
		printf("%3d", i);
	printf("\n");

	int r = 0, j;
	while (r < (k - 2)) {
		j = 0;
		while (j < num) {
			if (text[r] == '.')
				break;
			printf("%3c", text[r]);
			r++;
			j++;
		}
		printf("\n");
	} 

	return 0;
}