#include "main.h"

/**
 * free_grid-function that checks the number sign
 *
 * @grid: the number if byte
 * @height: the number if byte
 *
 * Return: return 1 if 'c' is positive
 * ot00herwise  0 if 'c' is zero
 *
 */
void free_grid(int **grid, int height)
{
	int height;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

