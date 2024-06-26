#include<stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k;
	int n;

	printf("%lu, %lu, ", i, j);
	for (n = 3; n <= 98; n++)
	{
		k = i + j;
		printf("%lu", k);
		if (n != 98)
			printf(", ");
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
