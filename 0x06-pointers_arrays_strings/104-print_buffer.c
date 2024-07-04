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
	int i, k, index, start_pt, line, num_lines;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	num_lines = (size - 1) / 10 + 1;
	for (line = 0; line < num_lines; line++)
	{
		start_pt = line * 10;
		printf("%08x:", start_pt);
		putchar(' ');
		for (i = 0; i < 10; i += 2)
		{
			index = start_pt + i;
			if (index < size)
			{
				printf("%02x", b[index]);
				if (index + 1 < size)
					printf("%02x", b[index + 1]);
				else
					printf("  ");
				putchar(' ');
			}
			else
				printf("    ");
		}
		putchar(' ');
		for (k = 0; k < 10; k++)
		{
			if (start_pt + k < size)
			{
				if (isprint(b[start_pt + k] printf("%c", b[start_pt + k]);
				else
					putchar('.');
			}
		}
		putchar('\n');
	}
}
