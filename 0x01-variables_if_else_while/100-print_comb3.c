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
	int i;


	for (i = 0; i < 100; i++)
	{
		number_1 = i / 10;
		number_2 = i % 10;

		if (number_1 < number_2)
		{
			putchar(number_1 + '0');
			putchar(number_2 + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
