#include "main.h"

/**
 *  *_strcpy -function that checks the number sign
 *
 *  @src : array iks kcmsdlvmkslmslm
 *  @dest : size of array
 *
  * Return: return 1 if 'c' is positive
 * otherwise  0 iff 'c' is zero
 *  and -1 gif 'c' is negative
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
