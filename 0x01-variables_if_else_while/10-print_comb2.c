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
	int c2;

	c = '0';
	while (c <= '9')
	{
		c2 = '0';
		while (c2 <= '9')
		{
			putchar(c);
			putchar(c2);
			if (!(c == '9' && c2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			++c2;
		}
		++c;
	}
	putchar('\n');
	return (0);
}
