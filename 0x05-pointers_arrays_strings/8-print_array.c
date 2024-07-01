#include "main.h"
#include<string.h>
/**
 * print_array - print n elements of an array
 * @a: array of integers
 * @n: n elements to print
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < (n - 1))
			printf(", ");
	}
	printf("\n");
}
