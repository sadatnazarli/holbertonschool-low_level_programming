#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at
 * the end of the file
 * @filename: name of the file
 * @text_content: buffer
 * Return: 1 or -1 depends on the case
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int real;
	int ana;
	ssize_t ryan;

	if (filename == NULL)
	{
		return (-1);
	}
	real = open(filename, O_RDWR | O_APPEND);
	if (real == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ana = strlen(text_content);
		ryan = write(real, text_content, ana);
		if (ryan == -1)
		{
			return (-1);
		}
	}
	close(real);
	return (1);
}
