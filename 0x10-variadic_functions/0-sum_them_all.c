#include "variadic_functions.h"

/**
  * sum_them_all - sums all args
  * @n: the number of args
  *
  * Return: the sum or 0
  **/
int	sum_them_all(const unsigned int n, ...)
{
	va_list		valist;
	int		sum;
	unsigned int	i;

	if (n == 0)
		return (0);
	va_start(valist, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(valist, int);
		++i;
	}
	return (sum);
}
