#include "main.h"
/**
 * _isalpha - check if argument is a letter(with ASCII code)
 * @c: parameter c of int type
 * Return: 1 if True, 0 if False
 */
int _isalpha(int c)
{
	if ((65 <= c && 90 >= c) || (97 <= c && 122 >= c))
		return (1);
	else
		return (0);

}
