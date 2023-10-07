#include "main.h"

/**
 *  _atoi -function that checks the number sign
 *
 *  @s : array iks kcmsdlvmkslmslm
 *
  * Return: return 1 if 'c' is positive
 * otherwise  0 iff 'c' is zero
 *  and -1 gif 'c' is negative
 *
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
