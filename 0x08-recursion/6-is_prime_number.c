#include "main.h"
/**
 * _check_prime - check if a number is prime or not
 * @n: the number
 * @i: iteration from 1 to any n divisors
 * Return: 1 if prime, 0 if not
 */
int _check_prime(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (i * i > n)
		return (1);
	return (_check_prime(n, i + 1));
}
/**
 * is_prime_number - check if a number is prime or not
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_check_prime(n, 2));
}
