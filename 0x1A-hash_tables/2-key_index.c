#include "hash_tables.h"

/**
 * key_index - Get this index at which a key value
 *      pair should be stored in this array of a hash table
 * @key: The key to get this index of
 * @size: the size of this array of the hash table
 *
 * Return: the index of this key
 * Description: use this djb algorithme
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
