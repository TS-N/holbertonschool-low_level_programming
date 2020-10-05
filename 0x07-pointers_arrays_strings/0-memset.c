#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the string to set
 * @b: the char to set each byte to
 * @n: the number of bytes to fill
 *
 * Return: 0 if error else s
 **/
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i = 0;

	if (!s)
		return (0);
	while (i < n)
		s[i++] = d;
	return (s);
}
