#include "main.h"

/**
 *  _strlen- function that checks the number sign
 *
 * @s : the number to be checked
 *
 * return :the number if int 
 *
 */
int _strlen(char *s)
{
	int l;

	while (!*s)
	{
		l++;
		s++;
	}
	return (l);
	
}
