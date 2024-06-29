#include "stdio.h"
/**
 * _strlen - Sətirin uzunluğunu hesablayan funksiya
 * @s: Hesablanacaq sətr
 *
 * Return: Sətrin uzunluğu (null simvolu daxil olmaz)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
