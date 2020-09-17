#include <stdio.h>

/**
* main - entry point
*
*Return: always 0
*
*/
int	main(void)
{
	int c;
	int c2;
	int c3;
	int c4;

	c = '0';
	while (c <= '9')
	{
		c2 = '0';
		while (c2 <= '9')
		{
			c3 = '0';
			while (c3 <= '9')
			{
				c4 = '0';
				while (c4 <= '9')
				{
					if ((c3 > c) || (c3 == c && c4 > c2))
					{
						putchar(c);
						putchar(c2);
						putchar(' ');
						putchar(c3);
						putchar(c4);
					if (!(c == '9' && c2 == '8' && c3 == '9' && c4 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
					}
					++c4;
				}
				++c3;
			}
			++c2;
		}
		++c;
	}
	putchar('\n');
	return (0);
}
