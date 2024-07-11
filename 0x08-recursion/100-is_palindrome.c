#include "main.h"
#include <string.h>
int _check_palindrome(char *s, int i, int len);
int _strlen(char *s);
/**
 * is_palindrome - check if string is palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (_check_palindrome(s, 0, _strlen(s)));
}
/**
 * _strlen - calculate length of the string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _check_palindrome - check if string is palindrome
 * @s: the string
 * @i: iteration from 0 to length of the string
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int _check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check_palindrome(s, i + 1, len - 1));
}
