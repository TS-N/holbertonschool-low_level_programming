#include "lists.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
unsigned int	_strlen(const char *s)
{
	unsigned int	l = 0;

	if (!s)
		return (0);
	while (*s++)
		++l;
	return (l);
}

/**
 * add_node_end - add a node to the end of the list
 * @head: the address of the first node
 * @str: the string for the new node
 * Return: the newly created node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*nn;
	list_t	*node;

	if (!head)
		return (0);
	nn = malloc(sizeof(list_t));
	if (!nn)
		return (0);
	nn->str = strdup(str);
	nn->len = _strlen(str);
	node = *head;
	if (!node)
		*head = nn;
	else
	{
		while (node->next)
			node = node->next;
		node->next = nn;
	}
	nn->next = 0;
	return (nn);
}
