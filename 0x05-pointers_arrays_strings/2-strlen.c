#include "holberton.h"

/**
* _strlen - gives the length of a string
* @s: the string from whitch len is found
*
* Return: the len of the string
**/
int	_strlen(char *s)
{
	int	l = 0;

	while (*s++)
		++l;
	return (l);
}

