#include "holberton.h"

/**
* puts2 - print every other char of a string
* @str: the string to manipulate
*
**/
void	puts2(char *str)
{
	while (str && *str)
	{
		_putchar(*str);
		if (str + 2)
			str += 2;
	}
	_putchar('\n');
}
