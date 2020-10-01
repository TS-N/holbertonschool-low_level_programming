#include "holberton.h"

/**
  * _strncat -  a function that concatenates two strings
  *@dest: destination string
  *@src: source string
  *@n: the number of bytes to cat
  *
  * Return: the cat string
  **/
char	*_strncat(char *dest, char *src, int n)
{
	char	*buf;
	int	i;

	if (!dest || !src)
		return (dest);
	buf = dest;
	while (*buf)
		++buf;
	i = 0;
	while (i < n && buf)
	{
		buf[i] = src[i];
		++i;
	}
	*buf = 0;
	return (dest);
}
