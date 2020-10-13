#include "holberton.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen(char *s)
{
	int	l = 0;

	if (!s)
		return (0);
	while (*s++)
		++l;
	return (l);
}

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

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the newly created concat. string
 **/
char	*str_concat(char *s1, char *s2)
{
	char	*cc;
	int	l1;
	int	l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	cc = malloc(l1 + l2 + 1);
	if (!cc)
		return (0);
	cc = _strncpy(cc, s1, l1);
	_strncpy(cc + l1, s2, l2 + 1);
	return (cc);
}
