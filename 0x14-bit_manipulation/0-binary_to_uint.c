#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: the binary number
 * Return: converted number, 0 if there is a char in b
 * that isn't 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_bin = 0, len = 0;
	int i, j;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			uint_bin += (1 << j);
	}
	return (uint_bin);
}
