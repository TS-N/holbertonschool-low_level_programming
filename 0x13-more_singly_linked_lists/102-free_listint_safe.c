#include "lists.h"

/**
 * _mmemcpy - copies memory area
 * @dest: the memory to write at
 * @src: the memory to write from
 * @n: the number of bytes to write
 *
 * Return: 0 if error else dest
 **/
char	*_mmemcpy(char *dest, char *src, size_t n)

{
	size_t	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}

/**
 * _rea - a function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @os: the old size in bytes of the allocated ptr
 * @ns: the new size in bytes of the new memory block
 *
 * Return: a pointer to the newly allocated block or NULL
 **/
void	*_rea(void *ptr, size_t os, size_t ns)
{
	void	*r;

	if (!ptr)
	{
		r = malloc(ns);
		return (r ? r : 0);
	}
	if (os == ns)
		return (ptr);
	if (!ns)
	{
		free(ptr);
		return (0);
	}
	r = malloc(ns);
	if (!r)
		return (0);
	if (ns < os)
		_mmemcpy(r, ptr, ns);
	else
		_mmemcpy(r, ptr, os);
	free(ptr);
	return (r);
}

/**
 * free_listint_safe -  frees a listint_t list, the list can contain a loop
 * @h: the address of the head of the list
 * Return: the size of the list that was freed
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t	*node;
	listint_t	*buf;
	void		**tab;
	size_t		tab_size;
	size_t		i;

	if (!h)
		return (0);
	node = *h;
	tab_size = 0;
	tab = NULL;
	while (node)
	{
		i = 0;
		while (i < tab_size)
		{
			if (tab[i] == node)
			{
				free(tab);
				*h = NULL;
				return (tab_size);
			}
			++i;
		}
		tab = _rea(tab, tab_size * sizeof(void *), (tab_size + 1) * sizeof(void *));
		if (!tab)
			exit(98);
		++tab_size;
		tab[tab_size - 1] = (void *)node;
		buf = node;
		node = node->next;
		free(buf);
	}
	*h = NULL;
	free(tab);
	return (tab_size);
}
