#include "main.h"

/**
 * main - Entry point.
 *
 * Description: A c programm that print with printf furncyion.
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
	return (0);
}
