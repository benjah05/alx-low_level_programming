#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of arguments received
 * @argv: array of arguments received
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg_mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	arg_mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", arg_mul);
	return (0);
}
