#include<stdio.h>
#include<stdlib.h>

/**
 * main - program entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;


	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 9; k++)
			{
				for (l = 0; l < 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(j + '0');
					if (i != 9 && j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
