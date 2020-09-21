/**
* print_alphabet - print the alphabet in lowercase
**/

#include "holberton.h"

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
	return (void);
}
