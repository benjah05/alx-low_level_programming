#include<stdio.h>
#include "main.h"
/**
 * print_line - print straight line in the terminal
 * @n: parameter n of int type
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
