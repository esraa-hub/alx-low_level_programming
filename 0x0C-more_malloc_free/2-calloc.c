#include "main.h"

/**
 * _calloc-function that checks the number sign
 *
 * @size: the number to be checked
 * @nmemb: the number to be checked
 *
 * Return: return 1 if 'c' is positive
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	 void *ptr;

	 if (nmemb == 0 || size == 0)
		 return (NULL);
	 ptr = malloc(sizeof(int) * nmemb);
	 if (ptr == 0)
		 return (NULL);
	 memset(ptr, 0, sizeof(int ) * nmemb);
	 return (ptr);
}
