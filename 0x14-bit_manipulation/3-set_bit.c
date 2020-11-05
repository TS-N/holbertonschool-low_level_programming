#include "holberton.h"

/**
  * set_bit - a function that sets the value of a bit to 1 at a given index
  * @n: a pointer to the number to change
  * @index: the index of the bit to set
  * Return: 1 if it worked or -1 if an error occured
  **/
int	set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	op = 1;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	op = op << index;
	*n = *n | op;
	return (1);
}
