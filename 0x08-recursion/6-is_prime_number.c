#include "holberton.h"

/**
  * the_real_prime - finds if the number is a prime
  * @n: the number to test
  * @fac: the factor to test
  *
  * Return: 1 if n is prime or 0 if not
  **/
int	the_real_prime(int n, int fac)
{
	if (fac == n)
		return (1);
	else if (!(n % fac) || fac > n)
		return (0);
	else
		return (the_real_prime(n, fac + 2));
}

/**
 * is_prime_number - finds if a number is a prime number
 * @n: the number to test
 *
 * Return: 1 if n is prime 0 otherwise
 **/
int	is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (!(n % 2))
		return (0);
	else
		return (the_real_prime(n, 3));
}
