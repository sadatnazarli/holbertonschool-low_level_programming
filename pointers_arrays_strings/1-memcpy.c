#include "main.h"
/**
 * _memcpy - copies the memory area
 * Return: a pointer to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes
 **/
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
