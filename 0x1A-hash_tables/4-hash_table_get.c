#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: the hash table
 * @key: the key to retreive from
  * Return: the value of the corresponding element
  **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t	*hn;

	if (!ht || !key || !*key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	hn = get_hn((hash_table_t *)ht, idx, key);
	return (hn ? hn->value : NULL);
}
