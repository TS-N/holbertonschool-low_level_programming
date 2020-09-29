#include "holberton.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
int	_strlen(char *s)
{
	int	l = 0;

	while (*s++)
		++l;
	return (l);
}

/**
 * puts2 - print every other char of a string
 * @str: the string to manipulate
 *
 **/
void	puts2(char *str)
{
	int	l;
	int	i;

	l = _strlen(str);
	i = 0;
	while (i < l)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
