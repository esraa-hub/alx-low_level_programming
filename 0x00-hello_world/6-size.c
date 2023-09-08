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
	printf("Size of a char: %lu  byte(s)\n" ,(long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n" ,(long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n" ,(long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",(long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n" ,(long)sizeof(float));
	return (0);
}
