#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that seraches for an integer
 * @array: array that we have
 * @size: size of an array
 * @cmp: pointer to the function to be used to compare values
 * Return: index itself or -1 based on the case
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp  == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
