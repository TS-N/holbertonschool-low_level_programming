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
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content to add to the file
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int	fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, _strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
