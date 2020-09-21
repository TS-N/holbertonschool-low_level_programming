/**
* _isalpha - check if a char is alpha
*@c: the char to check
*
* Return: 1 if c is alpha, 0 otherwise
**/

#include "holberton.h"

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
