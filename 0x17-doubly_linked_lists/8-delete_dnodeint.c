#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: first elem of the list
 * Return: the size of the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t	l;

	l = 0;
	while (h)
	{
		++l;
		h = h->next;
	}
	return (l);
}

/**
 * delete_dnodeint_at_index - inserts a new node at a given position
 * @h: the address of the head of the list
 * @idx: the index where to delete node
 * Return: 1 if success, -1 if it failed
 **/
int	delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t	*node;
	dlistint_t	*buf;
	size_t		l;

	if (!h || !*h)
		return (-1);
	l = dlistint_len(*h);
	node = *h;
	if (idx == 0)
	{
		buf = node->next;
		free(node);
		*h = buf;
		if (buf)
			buf->prev = 0;
		return (1);
	}
	else if (idx > l)
		return (-1);
	else if (idx == l)
	{
		while (node->next)
			node = node->next;
		buf = node->prev;
		free(node);
		if (buf)
			buf->next = 0;
		else
			*h = 0;
		return (1);
	}
	while (idx--)
		node = node->next;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
	return (1);
}
