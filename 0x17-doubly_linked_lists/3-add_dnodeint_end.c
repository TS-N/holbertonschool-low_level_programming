#include "lists.h"

/**
  * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
  * @head: the address of the head
  * @n: the int of the new node
  * Return: the address of the new node or 0
  **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*node;
	dlistint_t	*new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = 0;
	node = *head;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;
	}
	else
	{
		*head = new;
		new->prev = 0;
	}
	return (new);
}
