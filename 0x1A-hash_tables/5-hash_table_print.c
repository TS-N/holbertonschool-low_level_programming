#include "hash_tables.h"

/**
 * print_node - prints the data of an element
 * @node: the hash_node to print
 **/
void	print_node(hash_node_t *node)
{
	if (node)
		printf("'%s': '%s'", node->key, node->value);
}

/**
 * hash_table_print - prints a hash table
 * @ht: the table to print
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t		*node;
	unsigned long int	i;
	int			toggle;

	i = 0;
	toggle = 0;
	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				if (toggle)
					printf(", ");
				print_node(node);
				toggle = 1;
				node = node->next;
			}
			++i;
		}
		printf("}\n");
	}
}
