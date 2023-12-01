#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing this djb2 algorithme
 * @str: The string to this hash
 *
 * Return: This calculate hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
