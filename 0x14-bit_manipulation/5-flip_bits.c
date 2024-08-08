#include "main.h"
/**
 * flip_bits - find number of bits needed to flip
 * in order to get from one number to number
 * @n: the number to flip
 * @m: the number to flip to
 * Return: number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipNum = 0;
	unsigned long int num, lastBit;

	num = n ^ m;
	while (num != 0)
	{
		lastBit = num & 1;
		if (lastBit == 1)
			flipNum++;
		num = num >> 1;
	}
	return (flipNum);
}
