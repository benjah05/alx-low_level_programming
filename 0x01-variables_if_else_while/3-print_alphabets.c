#include<stdio.h>

/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	char alphABET;

	for (alphABET = 'a'; alphABET <= 'z'; alphABET++)
		putchar(alphABET);
	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
		putchar(alphABET);
	printf("\n");
	return (0);
}
