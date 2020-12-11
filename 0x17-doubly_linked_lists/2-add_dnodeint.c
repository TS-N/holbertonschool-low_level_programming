#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head: the address of the first elem of the list
  * @n: the int of the new node
  * Return: the address of the new node or NULL
  **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*node;
	dlistint_t	*new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->prev = 0;
	node = *head;
	if (node)
	{
		new->next = node;
		node->prev = new;
	}
	else
		new->next = 0;
	*head = new;
	return (new);
}
