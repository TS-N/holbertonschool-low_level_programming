#include "holberton.h"
#include "stdio.h"
/**
* main - find the largest prime factor of 612852475143
*
* Return: Always 0
**/
int	main(void)
{
	long	fac;
	long	res;
	long	n;

	n = 612852475143;
	fac = 2;
	res = n;
	while (fac < res)
	{
		while (!(res % fac))
			res /= fac;
		if (fac == 2)
			fac = 1;
		fac += 2;
	}
	printf("%li\n", fac);
	return (0);
}
