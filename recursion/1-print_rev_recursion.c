#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Description: This function prints a string in reverse order
 * using recursion. It first calls itself with the next character
 * in the string, and then prints the current character.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
