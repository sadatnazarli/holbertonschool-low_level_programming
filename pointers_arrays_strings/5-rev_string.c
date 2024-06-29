#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string in place
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int length = strlen(s);

	int a, b;

	for (a = 0, b = length - 1; a < b; a++, b--)
	{
		char temp = s[a];

		s[a] = s[b];
		s[b] = temp;
	}
}
