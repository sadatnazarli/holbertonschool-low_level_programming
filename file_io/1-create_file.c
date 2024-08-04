#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates file
 * @filename: name of the file
 * @text_content: buffer
 * Return: 1 or -1 depends on the case
 **/
int create_file(const char *filename, char *text_content)
{
	int real;
	int anna;
	ssize_t ryan;

	if (filename == NULL)
	{
		return (-1);
	}
	real = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (real == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		anna = strlen(text_content);
		ryan = write(real, text_content, anna);
		if (ryan == -1)
		{
			return (-1);
		}
	}
	close(real);
	return (1);
}
