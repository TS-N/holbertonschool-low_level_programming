#include "lists.h"

/**
  * free_list - free a list_t list
  * @head: the first node
  **/
void free_list(list_t *head)
{
	list_t	*node;
	list_t	*n_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		n_node = node->next;
		free(node->str);
		free(node);
		node = n_node;
	}
}
