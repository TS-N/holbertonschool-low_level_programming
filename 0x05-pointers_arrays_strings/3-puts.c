#include "holberton.h"

/**
* _puts - print a string
* @s: the string to print
*
**/
void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

