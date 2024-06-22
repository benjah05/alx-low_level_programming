#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;


	for (k = 0; k < 100; k++)
	{
		i = k / 10;
		j = k % 10;

		if (i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (k < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
