#include "hash_tables.h"
/**
 * hash_table_create - a function to create a new table
 * @size: size of the aray
 *
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int k;

	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		return (NULL);
		free(new_t);
	}
	for (k = 0; k < size; k++)
		new_t->array[k] = NULL;

	return (new_t);
}
