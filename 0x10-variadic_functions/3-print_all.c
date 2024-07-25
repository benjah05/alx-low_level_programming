#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list output;
	char c;
	int i;
	float f;
	char* s;

	va_start(output, format);
	c = va_arg(output, char);
	i = va_arg(output, int);
	f = va_arg(output, float);
	s = va_arg(output, char*);
	if (s == NULL)
		printf("(nil)");
	va_end(output);
	printf("\n");
}
