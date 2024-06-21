#include<stdio.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar("%c", alphabet);
	return (0);
}
