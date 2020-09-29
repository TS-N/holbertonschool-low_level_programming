#include "holberton.h"

/**
  * _atoi - convert an array to an int
  *@s: the string to extract int from
  *
  * Return: the converted integer
  **/
int	_atoi(char *s)
{
	char		*b;
	char		*b2;
	int		sign;
	int		l;
	int		ret;

	b = s;
	sign = 1;
	if (!b)
		return (0);
	while (*b && (*b < '0' || *b > '9'))
	{
		if (*b == '-')
			sign *= -1;
		++b;
	}
	l = 1;
	b2 = b;
	while (*b2 && *b2 >= '0' && *b2 <= '9')
	{
		++b2;
		if (*b2 && *b2 >= '0' && *b2 <= '9')
			l *= 10;
	}
	ret = 0;
	while (*b && l >= 1)
	{
		if (sign < 0)
			ret -= (*b - '0') * l;
		else
			ret += (*b - '0') * l;
		l /= 10;
		++b;
	}
	return (ret);
}
