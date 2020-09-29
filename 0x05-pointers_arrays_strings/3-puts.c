#include "holberton.h"

/**
* _puts - print a string
* @str: the string to print
*
**/
void	_puts(char *str)
{
	if (!str)
	{
		_putchar('\n');
		return;
	}
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
