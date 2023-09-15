#include "main.h"

/**
 *  more_numbers -function that checks the number sign
 *
 * Return: return 1 if 'c' is positive
 * otherwise  0 if 'c' is zero
 *  and -1 if 'c' is negative
 *
 */
void more_numbers(void)
{
	int i, j, sec;

	for (j = 0; j < 10 ; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(1 + 48);
			sec = i % 10;
			_putchar(sec + 48);
		}
		_putchar('\n'); 
	}
}
