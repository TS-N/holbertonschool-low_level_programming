#include "holberton.h"

/**
* print_rev - print a string in reverse
* @s: the string to print
*
**/
void	print_rev(char *s)
{
	char	*i0 = s;

	while (*++s)
		;
	while (--s >= i0)
		_putchar(*s);
	_putchar('\n');
}

