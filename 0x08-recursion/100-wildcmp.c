#include "holberton.h"

/**
 * c_in_s - looks if a char belongs to a string
 * @c: the char to look for
 * @s: the string to look in
 *
 * Return: 1 if found, 0 otherwise
 **/
int	c_in_s(char c, char *s)
{
	if (c == *s)
		return (1);
	else if (*s)
		return (c_in_s(c, s + 1));
	else
		return (0);
}

/**
 * wildcmp - compare two strings, allowing the second string to have wildcard *
  * @s1: the first string to compare
  * @s2: the second string to compare, can contain * as wildcard
  *
  * Return: 1 if match, 0 otherwise
  *
  **/
int	wildcmp(char *s1, char *s2)
{
	if (*s1 || *s2)
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else if (*s1 != *s2 && *(s2 - 1) == '*')
		{
			if (!*s2)
				return (1);
			return (wildcmp(s1 + 1, s2));
		}
		else
			return (0);
	}
	return (1);
}
