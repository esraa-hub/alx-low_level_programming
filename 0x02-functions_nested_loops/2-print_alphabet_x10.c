#include "main.h"

/**
 * print_alphabet_x10  - prints the alphabet.
 *
 * Description: A c programm that print with printf furncyion.
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar (i);
	}
	_putchar ('\n');
}
