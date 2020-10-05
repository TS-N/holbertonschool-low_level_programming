#include "holberton.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to search in
 * @c: the char to search
 *
 * Return: 0 if error or no match else the pointer to the matching char in s
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
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the string to match from
 *
 * Return: 0 if error or no match else the pointer to match
 **/
char	*_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		++s;
	}
	return (0);
}
