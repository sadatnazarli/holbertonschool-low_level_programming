#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocated memory
 * if malloc fails, causes normal process
 * termination with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
