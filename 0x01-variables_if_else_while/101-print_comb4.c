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
	int i = 0, j = 0, h = 0;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			for (h = 0; h <= 9; ++h)
			{
			if (i < j && i < h && j < h)
			{
				putchar (i + 48);
				putchar (j + 48);
				putchar (h + 48);
				if (i + j + h != 24)
				{
					putchar (',');
					putchar (' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
