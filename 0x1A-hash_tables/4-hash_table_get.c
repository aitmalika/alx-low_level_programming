#include "hash_tables.h"

/**
 * hash_table_get - Retrieve this value associated with
 *                  a key in a hash table
 * @ht: A pointer to this hash table
 * @key: The key to get this value of
 *
 * Return: If this key cannot be matched - NULL
 *         Other wise - this value associated with key
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
