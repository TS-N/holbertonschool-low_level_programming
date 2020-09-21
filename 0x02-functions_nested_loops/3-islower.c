/**
* _islower - check if a char is lowercase
*@c: the char to check
*
* Return: 1 if c is lowercase, 0 otherwise
**/

#include "holberton.h"
#include <ctype.h>

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
