#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j = 0;
	int k = 0;
	int digit_jump = 4;


	for (i = 0; i < 10; i++)
	{
		while (j < 10)
		{
			while (k < 10)
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				if (i != 7 && j != 8 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
				if (k == 9)
				{
					k = (k + digit_jump) % 10;
					digit_jump++;
				}
			j++;
		}
	}
	return (0);
}
