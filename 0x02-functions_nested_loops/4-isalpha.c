#include "main.h"
/**
 * _isalpha - check if argument is a letter(with ASCII code)
 * Return: 1 if True, 0 if False
 */
int _isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);

}
