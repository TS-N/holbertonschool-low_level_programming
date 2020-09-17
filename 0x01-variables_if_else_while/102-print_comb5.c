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
	int i;
	int i2;
	int i3;

	c = '0';
	i = -1;
	while (c <= '9')
	{
		c2 = '0' + ++i;
		i2 = -1;
		while (c2 <= '8')
		{
			c3 = '0' + i + ++i2;
			i3 = -1;
			while (c3 <= '9')
			{
				c4 = '1' + i + i2 + i3;
				while (c4 <= '9')
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
