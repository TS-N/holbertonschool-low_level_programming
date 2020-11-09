#include "holberton.h"

/**
  * read_textfile - reads a text file and prints it to the standard output
  * @filename: the name of the file
  * @letters: the number of letters it should read and print
  * Return: the actual number of letters it could read and print or 0 if failed
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char	*buf;
	int	fd;
	ssize_t	r = 0;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	buf[letters] = 0;
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	write(1, buf, r);
	free(buf);
	return (r);
}
