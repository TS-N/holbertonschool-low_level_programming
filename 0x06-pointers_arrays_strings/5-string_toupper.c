#include "holberton.h"

/**
  * string_toupper - changes all lowercase letters to uppercase
  * @s: the string to midify
  *
  * Return: the modified string
  **/
char	*string_toupper(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		++i;
	}
	return (s);
}
