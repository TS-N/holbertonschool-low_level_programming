#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list using Floyd's algo
  * @head: the first node of the list
  * Return: the node where the loop starts, or NULL if there is no loop
  **/
listint_t	*find_listint_loop(listint_t *head)
{
	listint_t	*p_slow;
	listint_t	*p_fast;

	if (!head)
		return (0);
	p_slow = head;
	p_fast = head;
	while (1)
	{
		if (!p_fast || !p_fast->next)
			return (NULL);
		p_slow = p_slow->next;
		p_fast = p_fast->next->next;
		if (p_slow == p_fast)
			break;
	}
	p_fast = head;
	while (1)
	{
		if (p_slow == p_fast)
			break;
		p_slow = p_slow->next;
		p_fast = p_fast->next;
	}
	return (p_slow);
}
