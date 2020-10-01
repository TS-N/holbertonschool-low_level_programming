#include "holberton.h"

/**
 * _strncpy - copy n char of a source string to dest
 *@src: the source string
 *@dest: the destination string
 * @n: the number of elements to copy
 *
 *Return: pointer to the dest string
 **/
char	*_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	if (!dest || !src)
		return (dest);
	while (i < n)
	{
		dest[i] = *src;
		if (*src)
			++src;
		++i;
	}
	return (dest);
}
