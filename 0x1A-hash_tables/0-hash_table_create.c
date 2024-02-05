#include "hash_tables.h"
/**
 * hash_table_create - a function to create a new table
 * @size: size of the aray
 *
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int k;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
		new_table->array[k] = NULL;
	return (new_table);
}
