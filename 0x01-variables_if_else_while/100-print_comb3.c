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
	int digit_jump = 3;

	for (i = 0; i < 10; i++)
	{
		while (j < 10)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0')
				if (i != 8 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
		if (j == 9)
		{
			j = (j + digit_jump) % 10;
			digit_jump++;
		}

		}

	}
	return (0);
}
