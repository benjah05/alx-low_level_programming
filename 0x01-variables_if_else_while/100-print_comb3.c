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


	for (index = 0; index < 100; index++)
	{
		i = index / 10;
		j = index % 10;

		if (i < j)
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
