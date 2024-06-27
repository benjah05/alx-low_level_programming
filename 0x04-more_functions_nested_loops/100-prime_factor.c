#include<stdio.h>
/**
 * main - print the largest prime factor
 * Return: void
 */
int main(void)
{
	long int num = 612852475143;
	long int largest = 0;
	int i, j, not_prime = 0;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					not_prime = 1;
					break;
				}
			}
			if (not_prime != 1)
			{
				if (largest < i)
					largest = i;
			}
		}
	}
	printf("%ld\n", largest);
	return (0);
}
