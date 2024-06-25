#ifndef PRINT_ALPHABET_H
#define PRINT_ALPHABET_H 

#include<stdio.h>

void print_alphabet(void);

#endif


void print_alphabet(void)
{
	char a_z;


	for (a_z = 'a'; a_z <= 'z'; a_z++)
		_putchar(a_z);
	_putchar('\n');

}
