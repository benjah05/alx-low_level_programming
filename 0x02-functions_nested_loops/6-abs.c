#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @x: _abs parameter is any integer
 * Return: 0
 */
int _abs(int x)
{
	if (x >= 0)
		_putchar('0' + x);
	else
	{
		x = x * -1;
		_putchar('0' + x);
	}
}
