#include "hash_tables.h"

/**
 * key_index - takes the returned hash value fom has_djb2
 * and computes corresponding index using division hashing
 * @key: pointer to value
 * @size: size or hashtable
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int returned_value = hash_djb2(key);
	unsigned long int index = returned_value % size;

	return (index);

}
