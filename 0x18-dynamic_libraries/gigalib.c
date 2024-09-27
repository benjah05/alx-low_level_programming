#include <stdio.h>
#include <stdlib.h>
/**
 * rand - override rand() function
 * Return: winning numbers and bonus
 */
int rand(void)
{
	int winning_numbers[] = {9, 8, 10, 24, 75};
	int bonus_number = 9;
	int call_number = 0;

	if (call_count < 5)
		return (winning_numbers[call_count++]);
	else
		return (bonus_number);
}
/**
 * srand - override srand() function
 * @seed: seed for random number generation
 * Return: void
 */
void srand(unsigned int seed)
{
	(void)seed;
	/* Do nothing */
}
