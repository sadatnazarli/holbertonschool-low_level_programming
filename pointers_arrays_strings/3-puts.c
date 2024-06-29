#include "main.h"
/**
 * _puts - Sətri konsola yazdıran funksiya
 * @str: Yazdırılacaq sətr
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	
	_putchar('\n');
}
