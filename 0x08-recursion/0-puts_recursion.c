#include "holberton.h"

/**
  * _puts_recursion - print a string
  * @s: the string to print
  *
  **/
void	_puts_recursion(char *s)
{
	if (!s)
		return;
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
		return;
	}
	_putchar('\n');
}
