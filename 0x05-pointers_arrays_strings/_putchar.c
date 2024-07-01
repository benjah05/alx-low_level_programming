#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: void
 */
void _putchar(char c) {
    write(1, &c, 1);
}
