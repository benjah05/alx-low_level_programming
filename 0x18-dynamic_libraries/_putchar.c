#include <unistd.h>
/**
 * _putchar - print a character
 * @c: the character
 * Return: NULL
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
