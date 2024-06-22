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
		i = index / 10;
		j = index % 10;

		if (i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
