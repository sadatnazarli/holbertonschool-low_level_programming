#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings- function that print strings
 * @separator:  the string to be printed between the strings
 * @n: the number of strings passed to the function
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	const char *str;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(st, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(st);
	printf("\n");
}
