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
	if (c == 0)
		return (s);
	return (0);
}
