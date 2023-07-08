#include "hash_tables.h"
#include "linked.h"
/**
 * hash_table_get - Retrieves the value  in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key searching for.
 * Return: Value associated with the key, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t key_len = strlen(key), i;
	hash_node_t *current;
	unsigned long int index;
	unsigned char *u_key = malloc((key_len + 1) * sizeof(unsigned char));

	if (u_key == NULL)
	return (0);
	for (i = 0; i <= key_len; i++)
	u_key[i] = (unsigned char)key[i];
	index = key_index(u_key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		return (current->value);
		current = current->next;
	}

	return (NULL);
}



