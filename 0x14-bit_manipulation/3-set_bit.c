Finclude
"main.h"
• set bit - sets the bit at the index
• On: the number to index
• Bindex: the bit to set
* Return: 1 if successful, -1 on error int
int set bit(unsigned long int *n, unsigned int index)
if (index >= sizeof (n) * 8)
return (-1);
return KUl(*n 1- 1L «< index));
