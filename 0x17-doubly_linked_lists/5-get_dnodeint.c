#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: the first elem of the list
  * @index: the index of the node to find
  * Return: the found node or 0
  **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t	*node;

	node = head;
	while (node && index)
	{
		node = node->next;
		--index;
	}
	return (node);
}
