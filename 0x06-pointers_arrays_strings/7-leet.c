#include "holberton.h"


/**
 * leet - convert a string in leet
 * @s: the string to convert
 *
 * Return: the string converted
 **/
char	*leet(char *s)
{
	int	i;
	int	j;
	char	*leet = "olleaaat";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j] || s[i] == leet[j] - 32)
				s[i] = j + '0';
			++j;
		}
		++i;
	}
	return (s);
}
