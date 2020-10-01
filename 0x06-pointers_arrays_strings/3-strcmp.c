#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: one string to compare
 * @s2: second string to compare
 *
 * Return: 0 if same char diff if not
 **/
int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i] || !s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s2[i] ? -s2[i] : 0);
}
