#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Desination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination 
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
