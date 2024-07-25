#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculate the sum of all parameters
 * @n: number of parameters
 * Return: the sum or 0 if there no parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int sum = 0, i;
	int x;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		sum += x;
	}
	va_end(num);
	return (sum);
}
