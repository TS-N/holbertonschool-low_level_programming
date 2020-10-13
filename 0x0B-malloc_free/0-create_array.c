#include "holberton.h"

/**
  * create_array - a function that creates an array of chars \
  and initializes it with a specific char
  * @size: the size of the array in bytes
  * @c: the char to initialize that array
  *
  * Return: the newly created initialized array
  **/
char	*create_array(unsigned int size, char c)
{
	char	*s;

	if (!size)
		return (0);
	s = malloc(size);
	if (!s)
		return (0);
	while (size > 0)
	{
		s[size - 1] = c;
		--size;
	}
	return (s);
}
