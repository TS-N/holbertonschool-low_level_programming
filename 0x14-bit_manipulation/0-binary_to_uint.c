#include "holberton.h"

/**
  * binary_to_uint - converts a binary as string to a utin
  * @b: the binary number as a string
  * Return: the converted uint
  **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int	u = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			++u;
		else if (*b == '0')
			u <<= 1;
		else
			return (0);
		++b;
	}
	return (u);
}
