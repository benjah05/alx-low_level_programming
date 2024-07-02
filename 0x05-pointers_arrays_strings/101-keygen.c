#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generate valid passwords
 * Return: 0
 */
int main(void)
{
	int sum = 0, n;
	int rand_char;

	srand(time(NULL));
	while (sum < 2772 - 127)
	{
		rand_char = rand() % 94 + 33;
		sum += rand_char;
		putchar(rand_char);
	}
	n = 2772 - sum;
	putchar(n);
	return (0);
}
