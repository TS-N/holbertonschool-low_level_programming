#include "holberton.h"

/**
 * _strcat -  a function that concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 * Return: the cat string
 **/
char	*_strcat(char *dest, char *src)
{
	char	*buf;

	if (!dest || !src)
		return (dest);
	buf = dest;
	while (*buf)
		++buf;
	while (*src)
	{
		*buf = *src;
		++buf;
		++src;
	}
	*buf = 0;
	return (dest);
}
