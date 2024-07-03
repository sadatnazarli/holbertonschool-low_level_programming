#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: where memory area pointed to by
 * @n: first n bytes of the memory area
 * @b: constant bytes
 * Return: a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
