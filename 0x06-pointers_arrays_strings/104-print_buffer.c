#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * print_buffer - print a buffer
 * @b: the buffer
 * @size: size bytes of the buffer
 * Return: NULL
 */
void print_buffer(char *b, int size)
{
	int i, k, start_pt = 0;

	while (start_pt < size)
	{
		printf("%08x: ", start_pt);
		for (i = start_pt; i < start_pt + 10; i++)
		{
			if (i < size)
				printf("%02x", (unsigned char) b[i]);
			else
				printf("  ");
			if (i % 2)
				putchar(' ');
		}
		for (k = start_pt; k < start_pt + 10; k++)
		{
			if (k < size)
			{
				if (isprint((unsigned char) b[k]))
					printf("%c", b[k]);
				else
					putchar('.');
			}
			else
				break;
		}
		start_pt += 10;
		if (start_pt < size)
			putchar ('\n');
	}
	putchar('\n');
}
