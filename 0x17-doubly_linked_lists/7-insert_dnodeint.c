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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the address of the head of the list
 * @idx: the index where to add the new node
 * @n: the int of the new node
 * Return: the new node or 0
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*node;
	dlistint_t	*new;
	size_t		l;

	if (!h)
		return (0);
	l = dlistint_len(*h);
	node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx > l)
		return (0);
	else if (idx == l)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	while (idx)
	{
		--idx;
		node = node->next;
	}
	new->next = node;
	new->prev = node->prev;
	node->prev->next = new;
	node->prev = new;
	return (new);
}
