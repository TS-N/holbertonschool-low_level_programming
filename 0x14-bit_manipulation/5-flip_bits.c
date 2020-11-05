#include "holberton.h"

/**
  * flip_bits - returns the number of bits you would need \
  to flip to get from one number to another
  *@n: the first nmber
  *@m: the second number
  * Return: the of bits you would need to flip
  **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int	buf;
	unsigned int		r = 0;

	buf = (n | m) ^ (n & m);
	while (buf)
	{
		if (buf & 1)
			++r;
		buf >>= 1;
	}
	return (r);
}
