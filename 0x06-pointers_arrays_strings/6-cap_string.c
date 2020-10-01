#include "holberton.h"

/**
 * char_in_string - search for a char in a string
 * @s: the string to search in
 * @c: the char to search
 *
 * Return: 1 if found, else 0
 **/
int	char_in_string(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

/**
 * cap_string - capitalize the first letter of each word
 * @s: the string to capitalize
 *
 * Return: the string
 **/
char	*cap_string(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else if (char_in_string(s[i - 1], "\n\t ,;.!?\"(){}"))
				s[i] -= 32;
		}
		++i;
	}
	return (s);
}
