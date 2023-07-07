#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key to be added
 * @value: value attached to key
 *
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_function(key) % ht->size;

	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = (char *)malloc(strlen(key) + 1);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = (char *)malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	if (ht->array[index] != NULL)
	{
		create_LL_and_handle_collision(ht, index, item);
	}
	else
	{
		ht->array[index] = item;
	}
	return (1);
}


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
