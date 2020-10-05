#include "holberton.h"

/**
  * _strstr - a function that locates a substring
  * @haystack: the string to search in
  * @needle: the string to find
  *
  * Return: the position of needle in haystack or 0 if error or no match
  *
  **/
char	*_strstr(char *haystack, char *needle)
{
	unsigned int	i;

	if (!haystack)
		return (0);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			++i;
			if (!needle[i])
				return (haystack);
		}
		++haystack;
	}
	return (0);
}
