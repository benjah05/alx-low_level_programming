#include "main.h"
/**
 *  _islower - check if argument is lowercase(with ASCII code)
 *  @c: parameter c of int type
 *  Return: 1 if True, 0 if False
 */
int _islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	else
		return (0);

}
