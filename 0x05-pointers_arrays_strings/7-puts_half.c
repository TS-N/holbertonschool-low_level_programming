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
* puts_half -  print the second half of the string
* @str: the string to manipulate
**/
void	puts_half(char *str)
{
	int	l;

	l = _strlen(str);
	str += l - (l / 2);
	while (*str)
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
