#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: the address of the first node
 * @n: the int for the new node
 * Return: the newly created node
 **/
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*node;
	listint_t	*buf;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!(*head))
		*head = node;
	else
	{
		buf = *head;
		while (buf->next)
			buf = buf->next;
		buf->next = node;
	}
	return (node);
}
