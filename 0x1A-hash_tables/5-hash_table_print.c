#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to print
 * ------------------
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i, boolean = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (!tmp)
			continue;

		if (boolean == 1)
			printf(", ");

		for (; tmp; tmp = tmp->next)
		{
			boolean = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next == NULL)
				break;
			printf(", ");
		}
	}
	printf("}\n");
}
