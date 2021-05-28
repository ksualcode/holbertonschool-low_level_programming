#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to print
 * ------------------
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		while (ht->array[i])
		{
			tmp = ht->array[i];
			free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			ht->array[i] = ht->array[i]->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
