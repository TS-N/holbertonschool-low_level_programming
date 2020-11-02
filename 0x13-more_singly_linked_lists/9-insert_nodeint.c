#include "lists.h"

/**
  * insert_nodeint_at_index - nserts a new node at a given position
  * @head: the address of the first elem of the list
  * @idx: the index of the list where the new node should be added.\
  Index starts at 0
  * @n: the int of the new node
  * Return: the address of the new node, or NULL if it failed
  **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*node;
	listint_t	*buf;
	listint_t	*buf_before;
	unsigned int	i;

	if (!head)
		return (0);
	i = 1;
	buf = *head;
	buf_before = *head;
	while (i <= idx)
	{
		if (!buf)
			return (0);
		++i;
		buf_before = buf;
		buf = buf->next;
	}
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = buf;
	if (idx == 0)
		*head = node;
	else
		buf_before->next = node;
	return (node);
}
