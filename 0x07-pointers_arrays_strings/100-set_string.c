#include "main.h"
#include <string.h>
/**
 * set_string - set value of a pointer to a char
 * @s: pointer to pointer of a string
 * @to: character to set
 * Return: NULL
 */
void set_string(char **s, char *to)
{
	*s = to;
}
