#include "hash_tables.h"

/**
 * key_index - Compute the corresponding slot index for a given key
 * @key: The key used to compute the slot index
 * @size: The size of the hash table
 *
 * Return: The computed slot index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int returned_value = hash_djb2(key);
	unsigned long int slot = returned_value % size;
	return (slot);
}
