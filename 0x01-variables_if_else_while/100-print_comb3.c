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
	int i;

	c = '0';
	i = 0;
	while (c <= '8')
	{
		c2 = '1' + i;
		while (c2 <= '9')
		{
			putchar(c);
			putchar(c2);
			if (!(c == '8' && c2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			++c2;
		}
		++c;
		++i;
	}
	putchar('\n');
	return (0);
}
