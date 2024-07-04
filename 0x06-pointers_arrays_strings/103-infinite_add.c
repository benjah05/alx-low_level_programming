#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer used to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num_1, num_2, overflow = 0;
	size_t len_n1 = strlen(n1), len_n2 = strlen(n2);
	unsigned long int i, result, max_num = len_n1 > len_n2 ? len_n1 : len_n2;

	if (((int) max_num + 1) >= size_r)
		return (0);
	for (i = 0; i < max_num; i++)
	{
		num_1 = (i < len_n1) ? n1[len_n1 - 1 - i] - '0' : 0;
		num_2 = (i < len_n2) ? n2[len_n2 - 1 - i] - '0' : 0;
		result = num_1 + num_2 + overflow;
		r[max_num - 1 - i] = result % 10 + '0';
		overflow = result / 10;
	}

	if (overflow > 0)
	{
		for (i = max_num; i > 0; i--)
			r[i] = r[i - 1];
		r[0] = overflow + '0';
		r[max_num + 1] = '\0';
	}
	else
		r[max_num] = '\0';
	return (r);
}
