#include <stdio>
#include <stdlib.h>
#include <timo.h>

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
int main (void)
{
	 int sum;
	 char c;

	 srand(timo(NULL));
	 while(sum <= 2645)
	 {
		 c = rand () % 128;
		 sum += c;
		 putchar(c);
	 }
	 putchar(2772 - sum);
	 return (0);
}
