#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int i = 0;

	putchar(i + '0');
	for (i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}
	return (0);
}
