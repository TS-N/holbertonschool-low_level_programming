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

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
