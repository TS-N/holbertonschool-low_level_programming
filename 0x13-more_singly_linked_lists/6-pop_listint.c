#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list, \
  and returns the head node’s data (n)
  * @head: the address of the first elem of the list
  * Return: the data of the deleted node or 0
  **/
int pop_listint(listint_t **head)
{
	listint_t	*buf;
	int		n;

	if (!head || !(*head))
		return (0);
	buf = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = buf;
	return (n);
}
