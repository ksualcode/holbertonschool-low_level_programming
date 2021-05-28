#include "hash_tables.h"

/**
 * hash_table_get - Retreives the key with its information
 * @ht: Hash table to insert the key
 * @key: Key they need to use to get
 * ------------------------
 * Return: the value associated with the element, or NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned int index;
	char *value = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)(key), ht->size);
	tmp = ht->array[index];

	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = strdup(tmp->value);
			break;
		}
		if (tmp->next == NULL)
			break;
	}

	return (value);
}
