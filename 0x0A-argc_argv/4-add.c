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
	int i, j, sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				prinf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
