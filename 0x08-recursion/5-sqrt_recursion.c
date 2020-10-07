#include "holberton.h"

/**
  * the_real_sqrt - calculate the sqrt
  * @n: the number to sqrt
  * @x: the tested number
  *
  * Return: x when x is the sqrt of n or -1 if error
  **/
int	the_real_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	else
		return (the_real_sqrt(n, x + 1));
}
/**
  * _sqrt_recursion - a function that calculate the square root of a number
  * @n: the number to sqrt
  *
  * Return: the sqrt of n or -1 if error
  **/
int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_real_sqrt(n, 1));
}
