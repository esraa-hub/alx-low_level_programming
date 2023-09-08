#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A c programm that print with printf furncyion.
 *
 * Return: Always 0 (success).
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; ++i)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
