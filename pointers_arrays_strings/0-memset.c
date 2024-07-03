#include <stdio.h>
/** This code has entery vale
 * And return type
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for ( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
