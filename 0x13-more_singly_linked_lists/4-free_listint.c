#include "lists.h"

/**
  * free_listint - free a listint_t list
  * @head: the first elem of the list
  **/
void free_listint(listint_t *head)
{
	listint_t	*node;
	listint_t	*buf;

	node = head;
	while (node)
	{
		buf = node;
		node = node->next;
		free(buf);
	}
}
