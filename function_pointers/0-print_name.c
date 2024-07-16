#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name using the given function
 * @name: The name to print
 * @f: Pointer to the function to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
