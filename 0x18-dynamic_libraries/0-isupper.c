#include "main.h"
/**
 * _isupper - check if a character is in uppercase
 * @c: parameter c of int type
 * Return: 1 if upper, 0 if not upper
 */
int _isupper(int c)
{
	if (c >= 65 && 90 >= c)
		return (1);
	else
		return (0);
}
