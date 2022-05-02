#include "main.h"

/**
 * create_file - to create a new file
 * @filename: file to be created
 * @text_content: text to be cpoied to created file
 * Return: 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		printf("File cannot be created/written");
		return (-1);
	}
	for (i = 0; text_content[i] == '\0'; i++)
	{
		written = write(fd, &text_content[i], 1);
		if (written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
