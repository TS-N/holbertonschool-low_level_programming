#include "holberton.h"
/**
* print_alphabet - print the alphabet in lowercase
**/
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

/**
* print_alphabet_x10 - print the alphabet in lowercase ten times
**/
void	print_alphabet_x10(void)
{
	int	i = 0;

	while (++i <= 10)
		print_alphabet();
	return (void);
}
