#include "main.h"
/**
 * print_times_table - print n times table
 * @n: the parameter that will determine the nth times table
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j;
	int product;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
					_putchar('0' + product);
				else if (product < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
