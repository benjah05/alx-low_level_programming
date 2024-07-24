#include <stdbool.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - get command-line arguments (the operation)
 * @argc: number of command-line arguments
 * @argv: array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int), num1, num2;
	bool div_or_mod;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	div_or_mod = argv[2][0] == '/' || argv[2][0] == '%';
	if (div_or_mod && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result(num1, num2));
	return (0);
}
