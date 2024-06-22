#include<stdio.h>
#include<stdlib.h>

/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int number_1;
	int number_2;
	int number_3;
	int number_4;
	int i, j;


	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			number_1 = i / 10;
			number_2 = i % 10;
			number_3 = j / 10;
			number_4 = j % 10;

			putchar(number_1 + '0');
			putchar(number_2 + '0');
			putchar(' ');
			putchar(number_3 + '0');
			putchar(number_4 + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
