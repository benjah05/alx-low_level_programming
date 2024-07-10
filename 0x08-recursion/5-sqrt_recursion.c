#include "main.h"
/**
 * _sqrt_root - find the square root of n
 * @i: iteration from 1 to square root of n
 * Return: square root of n
 */
int _sqrt_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_root(n, i + 1));
}
/**                                           * _sqrt_recursion - find natural square root of a number
 * @n: the number of int type
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        return (_sqrt_root(n, 1));
}
