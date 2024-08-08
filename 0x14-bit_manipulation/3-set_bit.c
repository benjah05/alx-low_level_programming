#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index at which of the bit to set
 * Return: 1 if it worked, -1 if any error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index >= sizeof(n) * 8)
		return (-1);
	mask = 1 << index;
	if (!mask)
		return (-1);
	*n = *n | mask;
	return (1);
}
