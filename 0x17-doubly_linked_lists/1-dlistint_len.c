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
