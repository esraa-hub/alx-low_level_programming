#include <stdio.h>

/**
 *  main-function that checks the number sign
 *
 * @argv : the number to be checked
 * @argc : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int main(int argc, char const *argv[])
{
	int i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
