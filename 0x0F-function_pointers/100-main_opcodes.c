#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, numBytes;
	unsigned char *opcodesFunc = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < numBytes; i++)
		printf("%02x ", opcodesFunc[i]);
	printf("\n");
	return (0);
}
