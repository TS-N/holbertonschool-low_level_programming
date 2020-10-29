#include "lists.h"

/**
  * print_list - print all elements of a list
  * @h: the head of the list
  * Return: the length of the list
  **/
size_t	print_list(const list_t *h)
{
	size_t	l;
	list_t	*node;

	l = 0;
	node = h;
	while (node)
	{
		if (!(node->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		++l;
		node = node->next;
	}
	return (l);
}
