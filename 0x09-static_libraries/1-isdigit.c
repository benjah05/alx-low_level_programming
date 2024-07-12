#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: parameter c of int type
 * Return: 1 if digit, 0 if not digit
 */
int _isdigit(int c)
{
	if (c >= 48 && 57 >= c)
		return (1);
	else
		return (0);
}
