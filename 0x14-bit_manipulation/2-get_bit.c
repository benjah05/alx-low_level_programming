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
	if (!n || index >= sizeof(n) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
