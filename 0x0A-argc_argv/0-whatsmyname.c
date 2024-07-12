#include <stdio.h>
/**
 * main - print its own name
 * @argc: number of command line arguments
 * @argv: array of argc size
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
