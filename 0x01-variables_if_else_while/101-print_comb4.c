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
	int i;
	int i2;

	c = '0';
	i = 0;
	while (c <= '7')
	{
		c2 = '1' + i;
		i2 = 0;
		while (c2 <= '8')
		{
			c3 = '2' + i + i2;
			while (c3 <= '9')
			{
				putchar(c);
				putchar(c2);
				putchar(c3);
				if (!(c == '7' && c2 == '8' && c3 == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				++c3;
			}
			++i2;
			++c2;
		}
		++c;
		++i;
	}
	putchar('\n');
	return (0);
}
