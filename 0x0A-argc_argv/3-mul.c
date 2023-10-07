#include <stdio.h>

/**
 *  main-function that checks the number sign
 *
 * @argv : the number to be checked
 * @argc : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00hrwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int main(int argc, char const *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
