#include "holberton.h"

/**
* _isupper - check if a char is uppercase
*@c: the char to check
*
* Return: 1 if c is lowercase, 0 otherwise
**/
int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
