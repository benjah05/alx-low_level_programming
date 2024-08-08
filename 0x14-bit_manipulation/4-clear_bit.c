#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: 1 if it worked, -1 if any error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index >= sizeof(n) * 8)
		return (-1);
	mask = 1 << index;
	*n = *n & (~mask);
	return (1);
}
