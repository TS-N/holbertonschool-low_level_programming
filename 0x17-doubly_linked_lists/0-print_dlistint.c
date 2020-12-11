#include "lists.h"

/**
  * print_dlistint - prints a dlistint data
  * @h: the first elem of the list
  * Return: the size of the list
  **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t	l;

	l = 0;
	while (h)
	{
		printf("%d\n", h->n);
		++l;
		h = h->next;
	}
	return (l);
}
