#include "hash_tables.h"

/**
  * delete_node - deletes an hash_node_t
  * @node: the node to delete
  **/
void	delete_node(hash_node_t *node)
{
	if (node)
	{
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t		*node;
	hash_node_t		*buf;
	unsigned long int	i;

	i = 0;
	if (ht)
	{
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				buf = node;
				node = node->next;
				delete_node(buf);
			}
			++i;
		}
		free(ht->array);
		free(ht);
	}
}
