#include "main.h"
/**
 * print_diagsums - print sum of the two diagonals of
 * a square matrix of integers
 * @a: an array of integers
 * @size: size of the array
 * Return: NULL
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
		sum_1 += a[size * i + i];
	for (j = size; j > 0; j--)
		sum_2 += a[size * j - j];
	printf("%d, %d\n", sum_1, sum_2);
}
