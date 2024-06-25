#include "main.h"
/** 
 * print_last_digit - return the last digit of a number
 * @x: parameter x of int type
 * Return: last digit of a number
 */
int print_last_digit(int x)
{
	int rem;

	rem = x % 10;
	if (rem > 0)
		rem = rem * -1;
	return (rem);

}
