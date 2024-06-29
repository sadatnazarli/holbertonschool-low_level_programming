#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int index, string;
	char temp;

	for (index = 0; s[index] != '\0'; index++)
	{

	}

	for (string = 0; string < index / 2; string++)
	{
		temp = s[string];
		s[string] = s[index - string - 1];
		s[index - string - 1] = temp;
	}
}
