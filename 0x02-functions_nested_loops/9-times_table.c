#include "main.h"
/**
 * times_table - print 9 time tables
 * Return: 0
 */
void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product < 10)
				_putchar('0' + product);
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
