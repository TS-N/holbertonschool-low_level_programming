#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index \
  index of a listint_t linked list
  * @head: the address of the first elem of the list
  * @index: the index of the node that should be deleted. Index starts at 0
  * Return: 1 if it succeeded, -1 if it failed
  **/
int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*buf;
	listint_t	*buf_before;
	unsigned int	i;

	if (!head || !*head)
		return (-1);
	i = 0;
	buf = *head;
	while (i < index)
	{
		if (!buf)
			return (-1);
		++i;
		buf_before = buf;
		buf = buf->next;
	}
	if (index == 0)
		*head = buf->next;
	else
		buf_before->next = buf->next;
	free(buf);
	return (1);
}
