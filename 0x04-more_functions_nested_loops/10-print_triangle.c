#include<stdio.h>
#include "main.h"
/**
 * print_triangle - printa triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, k, j;
	
	for (i = 1; i <= size; i++)
	{
		for (k = size; k > i; k--)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
}
