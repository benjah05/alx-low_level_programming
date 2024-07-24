#include "3-calc.h"
/**
 * op_add - add 2 two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract one number from other
 * @a: the first number (the other)
 * @b: the second number
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 number
 * @a: the first number
 * @b: the second number
 * Return: th eproduct of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - find remainder of the division of a by b
 * @a: the first number
 * @b: the second number
 * Return: a modulus b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
