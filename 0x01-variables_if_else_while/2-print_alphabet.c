#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*
*/
int	main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
