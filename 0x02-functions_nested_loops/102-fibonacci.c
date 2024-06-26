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

	printf("%d", i);
	printf(", ");
	printf("%d", j);
	for (n = 1; n < 49; n++)
	{
		k = i + j;
		printf("%d", k);
		if (n != 48)
			print(", ");
		i = j;
		j = k;
	}
	return (0);
}
