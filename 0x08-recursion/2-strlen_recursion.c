#include "holberton.h"

/**
  * _strlen_recursion - gives the length of a string
  * @s: the string from whitch len is found
  *
  * Return: the len of the string
  **/
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
