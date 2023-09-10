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
	int i = 0, j = 0, h = 0, k = 0;
	 int num1, num2;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			for (h = 0; h <= 9; ++h)
			{
				for (k = 0; k <= 9; ++k)
				{
					num1 = i + j;
					num2 = h + k;
					if (num1 != num2)
					{
						putchar (i + 48);
						putchar (j + 48);
						putchar (' ');
						putchar (h + 48);
						putchar (k + 48);
						if (num1 + num2 != 25)
						{
							putchar (',');
							putchar (' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
