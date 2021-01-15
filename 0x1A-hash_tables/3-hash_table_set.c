#include "hash_tables.h"

/**
  * create_hn - creates a newly allocated hash_node_t
  * @key: the key of the node
  * @value: the value of the node
  * Return: the newly created node or NULL if failed
  **/
hash_node_t	*create_hn(const char *key, const char *value)
{
	hash_node_t	*new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL || *(new->key) == '\0')
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

/**
  * add_hn - adds a node to the beginning of the linked list
  * @head: address of the first node of the l. list
  * @node: the node to add
  * Return: nothing
  **/
void	add_hn(hash_node_t **head, hash_node_t *node)
{
	if (*head)
		node->next = *head;
	*head = node;
}

/**
  * get_hn - returns a hash_node in hash_table based on input index
  * @ht: the hash table to retreive node from
  * @idx: the index to retreive from
  * @key: the key of the node to retreive
  * Return: the node found or NULL if it doesn't exist
  **/
hash_node_t	*get_hn(hash_table_t *ht, unsigned long int idx, const char *key)
{
	hash_node_t	*node;

	node = ht->array[idx];
	if (!node)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
  * change_hn_value - change the value of a hash_node
  * @hn: the hash node to modify it's value
  * @value: the new value to insert
  * Return: the changed node or NULL if failed
  **/
hash_node_t	*change_hn_value(hash_node_t *hn, const char *value)
{
	char	*dup;

	dup = strdup(value);
	if (!dup)
		return (NULL);
	free(hn->value);
	hn->value = dup;
	return (hn);
}

/**
  * hash_table_set - adds an element to the hash table
  * @ht: the hash table
  * @key: the key of the element to add
  * @value: it's value
  * Return: 1 if it succeeded or 0 otherwise
  **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int	idx;
	hash_node_t		*hn;

	if (!ht || !key || !value || !*key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	hn = get_hn(ht, idx, key);
	if (hn)
	{
		if (change_hn_value(hn, value) == NULL)
			return (0);
	}
	else
	{
		hn = create_hn(key, value);
		if (!hn)
			return (0);
		add_hn(&(ht->array[idx]), hn);
	}
	return (1);
}
