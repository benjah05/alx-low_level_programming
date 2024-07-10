#include "main.h"
/**
 * _sqrt_recursion - find natural squrae root of a number
 * @n: the number of int type
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	i++;
	return (_sqrt_recursion(n));
}
