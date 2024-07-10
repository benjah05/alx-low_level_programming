#include "main.h"
/**
 * is_prime_number - check if a number is prime or not
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	static int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0 && n != i)
		return (0);
	if (i * i > n)
		return (1);
	i++;
	return (is_prime_number(n));
}
