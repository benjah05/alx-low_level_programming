#include<stdio.h>
/**
 * main - print sum of even-valued terms
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c;
	int sum = 0;

	while (b < 4000000)
	{
		if (b % 2)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
