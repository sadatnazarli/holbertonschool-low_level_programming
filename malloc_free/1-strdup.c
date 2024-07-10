#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	unsigned int i;
	int *duplicate;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	duplicate = (str *)malloc((len + 1) * (sizeof(char)));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
