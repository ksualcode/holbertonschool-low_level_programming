#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: Key they need to use to get
 * @size: The size of the hash table
 * ------------------------
 * Return: The index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key) % size;

	return (hash_index);
}
