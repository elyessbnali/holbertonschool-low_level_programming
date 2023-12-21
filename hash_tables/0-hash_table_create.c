#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: (t)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;

	if (size == 0)
		return (NULL);

	t = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->size = size;
	t->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}
	return (t);
}
