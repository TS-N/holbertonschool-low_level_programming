/**
* main - entry point
*
* Return: always 0
*
**/

#include "holberton.h"

int	main(void)
{
	char *c = "Holberton\n";

	while (*c)
	{
		_putchar(*c);
		++c;
	}
	return (0);
}
