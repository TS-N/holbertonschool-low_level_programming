#include "holberton.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer to our number to change
 * @index: the index of the bit to unset
 * Return: 1 if it worked, or -1 if an error occurred
 **/
int	clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	op = 0;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	op = ~op;
	op = op ^ (1 << index);
	*n = *n & op;
	return (1);
}
