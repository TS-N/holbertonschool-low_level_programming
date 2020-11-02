#include "lists.h"

/**
  * print_listint - print all the elems of listint_t list
  * @h: the first node
  * Return: the nimber of nodes of the list
  **/
size_t	print_listint(const listint_t *h)
{
	size_t		l;
	const listint_t	*node;

	l = 0;
	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		++l;
	}
	return (l);
}
