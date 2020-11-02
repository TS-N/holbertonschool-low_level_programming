#include "lists.h"

/**
  * sum_listint - sums all the n elem of a list
  * @head: the first elem fo the list
  * Return: the sum
  **/
int sum_listint(listint_t *head)
{
	listint_t	*node;
	int		sum;

	sum = 0;
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
