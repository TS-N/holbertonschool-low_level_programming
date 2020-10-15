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
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string to concat
 * @s2: the second string to concat
 * @n: the max lenght of s2 to concat
 *
 * Return: the resulting concat string or NULL if failed
 **/
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char		*r;
	unsigned int	l1, l2;
	unsigned int	i, j;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (l2 > n)
		l2 = n;
	r = malloc(l1 + l2 + 1);
	if (!r)
		return (0);
	i = 0;
	while (i < l1)
	{
		r[i] = s1[i];
		++i;
	}
	j = 0;
	while (j < l2)
	{
		r[i + j] = s2[j];
		++j;
	}
	r[i + j] = '\0';
	return (r);
}
