#ifndef PRINT_ALPHABET_H
#define PRINT_ALPHABET_H

#include<stdio.h>

void print_alphabet_x10(void);

#endif

void print_alphabet_x10(void)
{
	char a_z;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a_z = 'a'; a_z <= 'z'; a_z++)
			_putchar(a_z);

		_putchar('\n');
	}

}
