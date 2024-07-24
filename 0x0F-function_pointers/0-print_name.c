#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name
 * @f: function pointer to whether to print name in uppercase or as is
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
