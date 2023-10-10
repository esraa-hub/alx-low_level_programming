#include "dog.h"
#include <stdio.h>

/**
 *  strcpy-function that checks for lowercase character
 *
 * @destination: te rcter to be checked
 * @source: te rcter to be checked
 *
 * Return:charcter
 */

char *strcpy(char *destination, const char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
	return (destination);
}
/**
 *  strlen-function that checks for lowercase character
 *
 * @str: te rcter to be checked
 *
 * Return:charcter
 */
int strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * new_dog-function that checks for lowercase character
 *
 * @name: te rcter to be checked
 * @age: te rcter to be checked
 * @owner: te rcter to be checked
 *
 * Return:charcter
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
