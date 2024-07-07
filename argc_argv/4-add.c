#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - Checks if a string is a number
 * @str: The string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 if successful, 1 if any argument is not a number
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
