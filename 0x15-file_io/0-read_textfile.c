#include "main.h"

/**
 * read_textfile - to read and print a textfile to stdout
 * @filename: the file to be read
 * @letters: number of letter to read and print
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rfile, a, written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	rfile = read(fd, buf, letters);
	if (rfile == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	for (a = 0; a < rfile; a++)
	{
		written = write(STDOUT_FILENO, &buf[a], 1);
		if (written == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
	}
	close(fd);
	free(buf);
	return (rfile);
}
