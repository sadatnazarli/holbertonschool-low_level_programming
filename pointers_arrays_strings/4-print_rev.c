#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints the reverse of the string by a new line
 * @s: string parameter
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	char *msg = "The reversed string is: ";

	for (i = 0; msg[i] != '\0'; i++)
	{
		_putchar(msg[i]);
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
