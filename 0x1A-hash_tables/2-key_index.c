#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: The key to get index for
 * @size: The size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
