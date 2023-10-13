#include "3-calc.h"
/**
 * get_op_func-the function of the num.
 *
 * @s :thr pointer to the integer.
 *
 * Return:an integer
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", add },
		{ "-", sub },
		{ "*", mul },
		{ "/", div },
		{ NULL, NULL }
	};
	int i = 0;

	while (1 < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].func);
		}
		i++;
	}
	return (NULL);
}
