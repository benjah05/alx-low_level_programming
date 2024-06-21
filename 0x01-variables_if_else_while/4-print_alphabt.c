#include<stdio.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e')
			putchar(alphabt);
	}
	printf("\n");
	return (0);
}
