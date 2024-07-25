#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list output;
	char *strType;
	int i = 0;

	va_start(output, format);
	if (!format[i])
		return;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(output, int));
				break;
			case 'i':
				printf("%d", va_arg(output, int));
				break;
			case 'f':
				printf("%f", va_arg(output, double));
				break;
			case 's':
				strType = va_arg(output, char*);
				if (strType == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strType);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(output);
	printf("\n");
}
