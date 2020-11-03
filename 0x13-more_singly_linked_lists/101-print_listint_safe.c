#include "lists.h"

/**
 * _memcpy - copies memory area
 * @dest: the memory to write at
 * @src: the memory to write from
 * @n: the number of bytes to write
 *
 * Return: 0 if error else dest
 **/
char	*_memcpy(char *dest, char *src, size_t n)

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
 * _real - a function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @os: the old size in bytes of the allocated ptr
 * @ns: the new size in bytes of the new memory block
 *
 * Return: a pointer to the newly allocated block or NULL
 **/
void	*_real(void *ptr, size_t os, size_t ns)
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
		_memcpy(r, ptr, ns);
	else
		_memcpy(r, ptr, os);
	free(ptr);
	return (r);
}

/**
 * print_listint_safe - prints a listint_t linked list where the \
 list can contain a loop at any point
 * @head: the first elem of the loop
 * Return: the number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t	*node;
	void		**tab;
	size_t		tab_size;
	size_t		i;

	if (!head)
		return (0);
	tab_size = 0;
	tab = NULL;
	node = head;
	while (node)
	{
		i = 0;
		while (i < tab_size)
		{
			if (tab[i] == node)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				free(tab);
				return (tab_size);
			}
			++i;
		}
		tab = _real(tab, tab_size * sizeof(void *), (tab_size + 1) * sizeof(void *));
		if (!tab)
			exit(98);
		++tab_size;
		tab[tab_size - 1] = (void *)node;
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
	}
	free(tab);
	return (tab_size);
}
