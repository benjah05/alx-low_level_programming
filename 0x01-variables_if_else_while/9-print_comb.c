#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i, ",");
		if ( i == 9)
			putchar(i);
	}
	return (0);
}
