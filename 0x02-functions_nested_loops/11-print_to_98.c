#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print numbers 0 through 98
 * @n: parameter n of int type
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
