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
	int i, k, start_pt;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (start_pt = 0; start_pt < size; start_pt += 10)
	{
		printf("%08x: ", start_pt);
		for (i = start_pt; i < start_pt + 10; i++)
		{
			if (i < size)
				printf("%02x", (unsigned char) b[i]);
			else
				printf("  ");
			if (i % 2 == 1)
				putchar(' ');
		}
		putchar(' ');
		for (k = start_pt; k < 10 + start_pt; k++)
		{
			if (k < size)
			{
				if (isprint(b[k]))
					printf("%c", b[k]);
				else
					putchar('.');
			}
			else
				break;
		}
		putchar('\n');
	}
}
