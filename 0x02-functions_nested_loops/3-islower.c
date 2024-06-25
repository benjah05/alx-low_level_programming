#ifndef PRINT_ALPHABET_H
#define PRINT_ALPHABET_H

#include<stdio.h>

int _islower(int c);

#endif

int _islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	else
		return (0);

}
