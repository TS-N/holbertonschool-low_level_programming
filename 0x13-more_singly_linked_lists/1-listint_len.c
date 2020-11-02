#include "lists.h"

/**
  * listint_len - retunr the len of the list
  * @h: the first node
  * Return: the nimber of nodes of the list
  **/
size_t	listint_len(const listint_t *h)
{
	size_t		l;
	const listint_t	*node;

	l = 0;
	node = h;
	while (node)
	{
		node = node->next;
		++l;
	}
	return (l);
}
