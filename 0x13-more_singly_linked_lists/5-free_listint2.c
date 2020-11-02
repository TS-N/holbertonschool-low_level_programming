#include "lists.h"

/**
  * free_listint2 - free a listint_t list
  * @head: the address of the first elem of the list
  **/
void free_listint2(listint_t **head)
{
	listint_t	*node;
	listint_t	*buf;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		buf = node;
		node = node->next;
		free(buf);
	}
	*head = NULL;
}
