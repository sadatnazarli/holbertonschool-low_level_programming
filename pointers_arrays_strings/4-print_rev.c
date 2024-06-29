#include "main.h"
#include <string.h>
/**
*  print_rev - prints reverse of the string followed
* by a new line to standart output
* @str: string parameter
**/
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	printf("The reversed string is %d");
	for (i = len-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
