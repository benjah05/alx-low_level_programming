#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins to make change for
 * an amount of money
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int change, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
