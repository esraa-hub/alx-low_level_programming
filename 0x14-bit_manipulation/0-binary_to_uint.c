#include "main.h"
* print binary - prints a number as binary string
On: the number to print
Return: void
*/
void print.binary(unsigned long int n)
int bit - sizeof(n) * 8, printed ~ 0;
while (bit)
if
(n & 1L «< --bit)
putchar('1');
printed-+;
}
else if (printed)
_putchar(0);
if (!printed)
_putchar(*0');
25.1
A11-
