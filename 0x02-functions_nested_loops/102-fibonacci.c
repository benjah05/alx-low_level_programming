#include<stdio.h>
/**
 * main - print 50th fibonacci series
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, k;
	int n;

	printf("%ld, %ld, ", i, j);
	for (n = 3; n <= 50; n++)
	{
		k = i + j;
		printf("%ld", k);
		if (n != 50)
			printf(", ");
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
