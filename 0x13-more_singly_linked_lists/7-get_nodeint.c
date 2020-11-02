#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: the address of the first elem of the list
  * @index: the index of the node, starting at 0
  * Return: the node of NULL
  **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t	*node;
	unsigned int	i;

	node = head;
	i = 0;
	while (node)
	{
		if (i == index)
			return (node);
		++i;
		node = node->next;
	}
	return (0);
}
