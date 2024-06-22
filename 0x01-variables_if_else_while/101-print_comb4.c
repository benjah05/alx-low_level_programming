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
	int n;


	for (n = 0; n < 1000; n++)
	{
		number_1 = n / 100;
		number_2 = (n / 10) % 10;
		number_3 = n % 10;

		if (number_1 < number_2 && number_2 < number_3)
		{
			putchar(number_1 + '0');
			putchar(number_2 + '0');
			putchar(number_3 + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
