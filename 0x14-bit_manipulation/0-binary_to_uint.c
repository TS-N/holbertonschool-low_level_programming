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
		u <<= 1;
		if (*b == '1')
			++u;
		else if (*b != '1' && *b != '0')
			return (0);
		++b;
	}
	return (u);
}
