#ifndef DOG_H
#define DOG_H

/**
 * struct dog- function that checks for lowercase character
 *
 * @name: the charcter to be checked
 * @age: the charcter to be checked
 * @owner: the charcter to be checked
 *
 * Description: return 1 if 'c' is lowercase
 * otherwise  always 0(success)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
