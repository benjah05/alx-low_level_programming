#include "main.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
	
                        if (h < 10)
			{
                                _putchar('0');
			}
                        _putchar(h);
                        _putchar(':');
                        if (m < 10)
			{
                                _putchar('0');
			}
                        _putchar(m)
                        _putchar('\n');
		}

	}
}
