#include <stdio.h>
#include <stdlib.h>

int winning_numbers[] = {9, 8, 10, 24, 75};
int bonus_number = 9;
int call_count = 0;

int rand()
{
	if (call_count < 5)
		return winning_numbers[call_count++];
	else
		return bonus_number;
}
void srand(unsigned int seed)
{
    /* Do nothing */
}
