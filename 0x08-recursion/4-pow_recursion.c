#include "holberton.h"

/**
 * _pow_recursion - calculate the power of a number
 * @x: the number to raise
 * @y: the power
 *
 * Return: the result of x^y or -1 if error
 **/
int	_pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
