#include "holberton.h"

/**
  * _calloc - allocate and initialize memory
  * @nmemb: the number of elements to allocate
  * @size: the size of each elem in bytes
  *
  * Return: the newly created array
  **/
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void		*r;
	unsigned long	i, res;

	if (!nmemb || !size)
		return (0);
	res = nmemb * size;
	r = malloc(res);
	if (!r)
		return (0);
	i = 0;
	while (i < res)
	{
		((char *)r)[i] = 0;
		++i;
	}
	return (r);
}
