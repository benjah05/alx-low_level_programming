#include "main.h"
/**
 * print_alphabet_x10 - print 10 lines of lowercase alphabets
 * Return: 0
 */
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
