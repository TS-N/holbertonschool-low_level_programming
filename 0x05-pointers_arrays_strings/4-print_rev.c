#include "holberton.h"

/**
* print_rev - print a string in reverse
* @s: the string to print
*
**/
void	print_rev(char *s)
{
	char	*i = s;

	if (!i)
	{
		_putchar('\n');
		return;
	}
	while (*i)
		++i;
	while (--i >= s)
		_putchar(*i);
	_putchar('\n');
}
