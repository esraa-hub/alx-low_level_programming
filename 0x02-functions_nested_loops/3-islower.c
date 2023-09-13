#include <ctype.h>
#include "main.h"

/*
 * _islower :  Function that checks for lowercase character.
 *
 * @c :is the  charavter yo check
 *
 * return : On lower case returns 1
 * On otherwise returns 0.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
