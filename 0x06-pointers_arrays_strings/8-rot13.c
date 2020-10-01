#include "holberton.h"

/**
 * rot13 - rot13 the input string
 *@s: the input string to rot13
 *
 * Return: the rotated string
 **/
char	*rot13(char *s)
{
	int	i;
	char	r[] = "NOPQRSTUVWXYZABCDEFGHIJKLM******nopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A' &&  s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			*(s + i) = r[*(s + i) - 'A'];
		++i;
	}
	return (s);
}
