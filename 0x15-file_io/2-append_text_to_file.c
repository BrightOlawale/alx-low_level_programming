#include "main.h"

/**
 * append_text_to_file - append new text to file
 * @filename: file to append new text to
 * @text_content: the text to append
 * Return: 1 if successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		written = write(fd, &text_content[i], 1);
		if (written == -1)
			close(fd);
			return (-1);
	}
	close(fd);
	return (1);
}
