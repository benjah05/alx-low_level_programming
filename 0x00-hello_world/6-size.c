#include<stdio.h>
/**
 * main - program entry point
 * Return: void
 */
int main(void)
{
	printf("Size of a char: (%d) byte(s)", sizeof(char));
	printf("Size of an int: (%d) byte(s)", sizeof(int));
	printf("Size of a long int: (%lu) byte(s)", sizeof(long int));
	printf("Size of a long long int: (%llu) byte(s)", sizeof(long long int));
	printf("Size of a float: (%d) byte(s)", sizeof(float));
	return (0);
}
