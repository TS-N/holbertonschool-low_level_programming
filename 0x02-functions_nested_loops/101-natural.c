#include <stdio.h>

/**
 * _putnb - print a number to stdout
 *@n: the number to print
 *
 **/
void	_putnb(int n)
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
	int	n;
	int	sum;

	sum = 0;
	n = 0;
	while (n < 1024)
	{
		if (!((n % 3) && (n % 5)))
			sum += n;
		++n;
	}
	_putnb(sum);
	putchar('\n');
	return (0);
}
