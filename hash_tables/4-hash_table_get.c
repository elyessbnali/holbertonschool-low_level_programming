#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: The hash table
 * @key: The key you are looking for
 * Return: value if successful, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *p = NULL;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	if (p == NULL)
	{
		return (NULL);
	}

	while (strcmp(key, p->key) != 0)
	{
		p = p->next;
	}

	return (p->value);
}
