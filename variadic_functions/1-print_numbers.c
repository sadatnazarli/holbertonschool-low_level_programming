#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(st, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(st);
	printf("\n");
}
