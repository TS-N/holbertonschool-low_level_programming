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
	long long	sum;

	i = 1;
	sum = 0;
	n = 0;
	n1 = 0;
	n2 = 1;
	while (n <= 4000000)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (n % 2)
			sum += n;
	}
	_putnb(sum);
	putchar('\n');
	return (0);
}
