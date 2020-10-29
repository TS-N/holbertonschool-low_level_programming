#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: the head of the list
  * Return: the length of the list
  **/
size_t list_len(const list_t *h)
{
	size_t	l;
	list_h	*node;

	l = 0;
	node = h;
	while (node)
	{
		++l;
		node = node->next
	}
	return (l);
}
