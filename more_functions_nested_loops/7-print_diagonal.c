#include "main.h"
/**
 * print_diagonal - function or entry point
 * @n: character that will be checked
 **/
void print_diagonal(int n)
{
	int a, j;


	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (j = 1; j <= a; j++)
			{
				if (a != j)
				{
					_putchar(' ');
				}
				else if (a == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
