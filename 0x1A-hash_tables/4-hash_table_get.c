/*
 * File: 4-hash_table_get.c
 * Auth: malika
*/

#include "hash_tables.h"

/**
 * hash_table_get - Retrive this value associated with
 *                  a key in a hash tables
 * @ht: A pointer to this hash table
 * @key: This key to get this value of
 *
 * Return: If this key cannot be matched - NULL
 *         Otherwise - this value associated with this key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
