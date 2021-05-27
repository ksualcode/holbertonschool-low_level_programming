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
	unsigned int index, i;
    char *value = NULL;
    
    index = key_index((const unsigned char *)(key), ht->size);
    for (i = 0; ht->array[index]; i++)
    {
        if (strcmp(ht->array[index]->key, key) == 0)
        {
            value = ht->array[index]->value;
            return (value);
        }
    }
}