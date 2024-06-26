#include<stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k;
	unsigned long int i_1, i_2, j_1, j_2, a, b;
	int n, count = 1;

	printf("%lu, %lu, ", i, j);
	for (n = 3; n <= 92; n++)
	{
		k = i + j;
		printf("%lu", k);
		if (n != 98)
			printf(", ");
		i = j;
		j = k;
	}

	i_1 = i / 10000000000;
	i_2 = i % 10000000000;
	j_1 = j / 10000000000;
	j_2 = j % 10000000000;
	for (n = 93; n <= 98; n++)
	{
		a = i_1 + j_1;
		b = i_2 + j_2;
		if (i_2 + j_2 > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");

		i_1 = j_1;
		i_2 = j_2;
		j_1 = a;
		j_2 = b;
	}


	}
	printf("\n");
	return (0);
}
