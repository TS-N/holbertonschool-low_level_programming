#include "holberton.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
size_t	_strlen(char *s)
{
	size_t	l = 0;

	while (*s++)
		++l;
	return (l);
}

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: the content to add to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int	fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	close(fd);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
