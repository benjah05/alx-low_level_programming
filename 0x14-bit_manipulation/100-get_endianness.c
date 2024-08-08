#include "main.h"
/**
 * get_endianness - find out what kind of endian
 * our architecture is running on
 * Return: 1 if it's little endian, 0 if it's big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *numPtr;

	numPtr = (char *) &num;
	if (*numPtr)
		return (1);
	else
		return (0);
}
