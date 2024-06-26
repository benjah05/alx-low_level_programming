#include<stdio.h>
/**
 * main - print 50th fibonacci series
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int n, k;

	printf("%d, %d, ", i, j);
	for (n = 3; n <= 50; n++)
	{
		k = i + j;
		printf("%lu", k);
		if (n != 50)
			printf(", ");
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
