#include <unistd.h>
/**
 * _putchar - print a character
 * @c: the character
 * Return: void
 */
void _putchar(char c);
{
	write(1, &c, 1);
}
