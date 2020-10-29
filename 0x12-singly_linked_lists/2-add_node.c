#include "lists.h"

/**
 * _strlen - gives the length of a string
 * @s: the string from whitch len is found
 *
 * Return: the len of the string
 **/
unsigned int	_strlen(char *s)
{
	unsigned int	l = 0;

	if (!s)
		return (0);
	while (*s++)
		++l;
	return (l);
}

/**
 * add_node - add a node to a list
 * @head: the head of the list
 * Return: the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t	*node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (0);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
