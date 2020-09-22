#include <stdio.h>

/**
 * _putnb - print a number to stdout
 *@n: the number to print
 *
 **/
void	_putnb(long long n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if ((n / 10))
	{
		_putnb(n / 10);
		putchar('0' + (n % 10));
	}
	else
		putchar('0' + n);
}

/**
* main - entry point
*
* Return: nothing
**/
int	main(void)
{
	int		i;
	long long	n1;
	long long	n2;
	long long	n;

	i = 1;
	n1 = 0;
	n2 = 1;
	while (i <= 50)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		_putnb(n);
		if (!(i == 50))
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
