#include<stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned int i = 1, j = 2, k;
	int n;

	printf("%u, %u, ", i, j);
	for (n = 3; n <= 98; n++)
	{
		k = i + j;
		printf("%u", k);
		if (n != 98)
			printf(", ");
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
