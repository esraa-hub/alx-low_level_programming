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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%iis positive\n", n);
	else if (n == 0)
		printf("%iis Zero\n", n);
	else if (n < 0)
		printf("%iis negative\n", n);
	return (0);
}
