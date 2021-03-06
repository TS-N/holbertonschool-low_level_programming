#include "holberton.h"

/**
  * _memcpy - copies memory area
  * @dest: the memory to write at
  * @src: the memory to write from
  * @n: the number of bytes to write
  *
  * Return: 0 if error else dest
  **/
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
