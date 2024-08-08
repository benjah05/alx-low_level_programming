#include "main.h"
/**
 * get_bit - find the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit to get
 * Return: value of the bit at index index,
 * -1 if any error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (!n)
		return (-1);
	return (n & 1);
}
