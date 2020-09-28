#include "holberton.h"

/**
* _strcpy - copy a source string to dest
*@src: the source string
*@dest: the destination string
*
*Return: pointer to the dest string
**/
char	*_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (dest + i && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}
