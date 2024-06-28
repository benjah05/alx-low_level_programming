#include <stdio.h>
/**
* main- print the largest prime factor
* Return: 0
*/
int main(void)
{
	long int num = 612852475143;
	int i = 1;

	while (i < num / 2)
	{
		if (num % i == 0)
		{
			num /= 2;
			continue;
		}
		for (i = 3; i < num / 2; i += 2)
		{
			if (num % i == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
