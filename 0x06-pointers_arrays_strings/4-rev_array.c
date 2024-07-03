#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
