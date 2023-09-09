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
	int i = 0, j = 0;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (i < j)
			{
				putchar (i + 48);
				putchar (j + 48);
				if (i + j != 17)
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
