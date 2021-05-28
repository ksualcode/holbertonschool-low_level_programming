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
	hash_node_t *tmp, *search;

	if (!key || strcmp(key, "") == 0 || !value || !ht)
		return (0);
	tmp = malloc(sizeof(hash_node_t));
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	if (!tmp->key || !tmp->value || !tmp)
		return (0);

	tmp->next = NULL;
	index = key_index((const unsigned char *)(key), ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = tmp;
	else
	{
		search = ht->array[index];
		while (search)
		{
			if (strcmp(search->key, key) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				free(tmp->value);
				free(tmp->key);
				free(tmp);
				if (!ht->array[index]->value)
					return (0);
				return (1);
			}
			search = search->next;
		}
		tmp->next = ht->array[index];
	}
	ht->array[index] = tmp;
	return (1);
}
