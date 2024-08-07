#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int x;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		printf("%d", x);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
