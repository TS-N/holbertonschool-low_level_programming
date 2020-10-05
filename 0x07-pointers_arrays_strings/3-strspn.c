#include "holberton.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to search in
 * @c: the char to search
 *
 * Return: 0 if error or no match else the pointer to the matching char in s
 *
 **/
char	*_strchr(char *s, char c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			return (s);
		++s;
	}
	return (0);
}

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to check
 * @accept: the bytes that s should match
 *
 * Return: the number of bytes matching or 0 if error or no match
 **/
unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	n = 0;

	if (!s)
		return (0);
	while (*s && _strchr(accept, *s))
	{
		++n;
		++s;
	}
	return (n);
}
