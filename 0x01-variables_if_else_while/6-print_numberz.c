#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*
*/
int	main(void)
{
	int c;

	c = 48;
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
