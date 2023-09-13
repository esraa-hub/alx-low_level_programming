#include "main.h"

/**
 * _isalpha - function that checks character
 *
 * @c: the charcter to be checked
 *
 * Return: return 1 if 'c' is lowercase or uppercase
 * otherwise  always 0(success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && c != 91, 92, 93, 94, 95, 96)
		return (1);
	return (0);
}
