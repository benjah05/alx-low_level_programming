#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa <= 15; hexa++)
		putchar('a' + hexa);
	putchar('\n');
	return (0);
}
