#include <stdio.h>
/**
 * main - print number of arguments passed into a program
 * @argc: number of arguments passed
 * @argv: array of argc size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, arg_sum = 0;
	(void)argv;

	for (count = 1; count < argc; count++)
		arg_sum += 1;
	printf("%d\n", arg_sum);
	return (0);
}
