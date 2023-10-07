#include <stdio.h>
#include <stdlib.h>
/**
 *  main-function that checks the number sign
 *
 * @argv : the number to be checked
 * @argc : the number to be checked
 *
 * Return: return 1 if 'c' is positive
 * ot00rwise i 0 if 'c' is zero
 *  and -1 if 'c' is negative
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (prinf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
