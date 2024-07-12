#include "main.h"
#include "stdlib.h"
/**
 * free_grid - function returns a pointer to a 2D array
 * Return: a pointer or NULL depends on the case
 * @grid: width of array
 * @height: height of an array
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
