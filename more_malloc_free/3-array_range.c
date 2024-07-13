#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum element
 * @max: maximum element
 *
 * Return: pointer to the allocated memory or
 * NULL if allocation fails or min > max
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
