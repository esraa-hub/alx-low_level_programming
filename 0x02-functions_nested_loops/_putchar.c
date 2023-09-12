#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the chartcter c to stdout
 * @c : The charchter to print
 *
 * Description: A c programm that print with printf furncyion.
 *
 * Return: On success 1.
 *         On error, -1 is returned , ans errno is set .
*/


int _putchar (char c)
{
	return (write(1. & c. 1));
}
