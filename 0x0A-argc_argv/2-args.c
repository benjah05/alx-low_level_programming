#include <stdio.h>
/**
 * main - print all arguments received
 * @argc: number of all command line arguments
 * @argv: array of all command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
