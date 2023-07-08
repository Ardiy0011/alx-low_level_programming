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
	size_t key_len = strlen(key), i;
	hash_node_t *slot_pt;
	unsigned long int index;
	unsigned char *unsigned_key = malloc((key_len + 1) * sizeof(unsigned char));

	if (unsigned_key == NULL)
		return 0;
	for (i = 0; i <= key_len; i++)
		unsigned_key[i] = (unsigned char)key[i];
	index = key_index(unsigned_key, ht->size);
	slot_pt = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (slot_pt == NULL)
		return (0);
	slot_pt->key = (char *)malloc(strlen(key) + 1);
	if (slot_pt->key == NULL)
	{
		free(slot_pt);
		return (0);
	}
	slot_pt->value = (char *)malloc(strlen(value) + 1);
	if (slot_pt->value == NULL)
	{
		free(slot_pt->key);
		free(slot_pt);
		return (0);
	}
	strcpy(slot_pt->key, key);
	strcpy(slot_pt->value, value);
	if (ht->array[index] != NULL)/*if the index of hash table isnt empty or has something run function that creates linked list*/
	{
		create_LL_and_handle_collision(ht, index, slot_pt);
	}
	else
	{
		ht->array[index] = slot_pt;/*else place the value in the index of the hash table*/
	}
	return (1);
}

/**
 * create_LL_and_handle_collision - if collision create a linked list to store excess
 * Return: none
 */
void create_LL_and_handle_collision()
{

}

