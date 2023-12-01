/*	
 * File: 2-key_index.c
 * Auth: malika
*/

#include "hash_tables.h"

/**
 * key_index - Get this index at which a key value pair should
 *             be stored in array of a hash table
 * @key: the key to get this index of
 * @size: the size of this array of this hash table
 *
 * Return: the index of this key
 *
 * Description: use this object algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
