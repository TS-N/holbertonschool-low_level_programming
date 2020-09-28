#include "holberton.h"

/**
* puts2 - print every other char of a string
* @str: the string to manipulate
*
**/
void	puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
