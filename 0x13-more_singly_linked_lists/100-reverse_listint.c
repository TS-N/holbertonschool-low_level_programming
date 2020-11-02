#include "lists.h"

/**
  * rec_rev_list - recursively reverse a list
  * @head: the address of the first elem of the list
  * @node: the current node
  * @prev_node: the previous node
  * Return: always 0
  **/
int	rec_rev_list(listint_t **head, listint_t *node, listint_t *prev_node)
{
	if (!(node->next))
	{
		*head = node;
		node->next = prev_node;
		return (0);
	}
	rec_rev_list(head, node->next, node);
	node->next = prev_node;
	return (0);
}
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: the address of the forst elem of the list
  * Return: a pointer to the first node of the reversed list
  **/
listint_t *reverse_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);
	rec_rev_list(head, *head, 0);
	return (*head);
}
