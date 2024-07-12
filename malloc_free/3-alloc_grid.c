#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Allocates memory for a 2-dimensional grid of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated grid
 *         NULL if width or height is 0 or negative, or if malloc fails
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		array[i] = malloc(width * sizeof(int *));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
		{
			array[i][j] =  0;
		}
	}
	return (array);
}
