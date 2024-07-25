#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the numbers of strings passed to a function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char* s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
