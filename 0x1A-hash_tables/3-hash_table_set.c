#include "hash_tables.h"

/**
 * hash_table_set - Returns the index of a key
 * @ht: Hash table to insert the key
 * @key: Key they need to use to get
 * @value: The value of the key
 * ------------------------
 * Return: 1 if success, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *tmp;

	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;

	index = key_index((const unsigned char *)(key), ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = tmp;
	}
	else
	{
		tmp->next = ht->array[index];
		ht->array[index] = tmp;
	}

	return (1);
}
