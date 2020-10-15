#include "holberton.h"

/**
  * malloc_checked - a function that allocates memory
  * @b: the size to allocate
  *
  * Return: the pointer on allocated mem or 98 if failed
  **/
void	*malloc_checked(unsigned int b)
{
	void	*r;

	r = malloc(b);
	if (!r)
		exit(98);
	return (r);
}
