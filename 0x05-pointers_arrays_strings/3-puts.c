#include "main.h"
/**
 * _puts - print a string followed by a new line
 * to stdout
 * @str: pointer to string str
 */
void _puts(char *str)
{
	fputs(str, stdout);
	fputc('\n', stdout);
}
