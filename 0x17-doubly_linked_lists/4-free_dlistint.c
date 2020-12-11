#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: the head of the list
  **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t	*buf;

	while (head)
	{
		buf = head->next;
		free(head);
		head = buf;
	}
}
