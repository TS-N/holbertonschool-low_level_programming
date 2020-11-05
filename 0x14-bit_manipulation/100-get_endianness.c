#include "holberton.h"

/**
  * get_endianness - a function that checks the endianness
  * Return: 0 if big endian, 1 if little endian
  **/
int get_endianness(void)
{
	short int	n = 1;
	void		*p;

	p = (void *)&n;
	if (((char *)p)[0] == 1)
		return (1);
	else
		return (0);
}
