#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string parameter
 */
void puts2(char *str)
{
	char *ptr = str;
	int index = 0;

	while (*ptr != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(*ptr);
		}
		ptr++;
		index++;
	}
	 _putchar('\n');
}
