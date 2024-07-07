#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: The number to compute the factorial of
 *
 * Return: The factorial of the number
 * or -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
