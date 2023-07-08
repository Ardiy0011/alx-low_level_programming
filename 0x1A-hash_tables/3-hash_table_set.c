#include "hash_tables.h"
#include "linked.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to be added.
 * @value: Value attached to the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t key_len = strlen(key), i;
	hash_node_t *slot_pt;
	unsigned long int index;
	unsigned char *unsigned_key = malloc((key_len + 1) * sizeof(unsigned char));

	if (unsigned_key == NULL)
		return (0);
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
        free(slot_pt->value);
		free(slot_pt);
		return (0);
	}
	strcpy(slot_pt->key, key);
	strcpy(slot_pt->value, value);
	if (ht->array[index] != NULL)
	{
		/* If the index of the hash table is not empty, run function that creates a linked list */
		create_LL_and_handle_collision(ht, index, slot_pt);
	}
	else
	{
		ht->array[index] = slot_pt;
		/* Else, place the value in the index of the hash table */
	}
	return (1);
}


/**
 * allocate_list - Allocates memory for a new LinkedList.
 *
 * Return: Pointer to the newly allocated LinkedList.
 */
LinkedList *allocate_list()
{
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    if (list == NULL) {
        return (NULL);
    }
    list->item = NULL;
    list->next = NULL;
    return (list);
}

/**
 * create_LL_and_handle_collision - If collision occurs, create a linked list to store excess.
 * @ht: Pointer to the hash table
 * @index: Index of the collision
 * @item: New node to be added to the linked list
 */
void create_LL_and_handle_collision(hash_table_t *ht, unsigned long index, hash_node_t *item)
{
    LinkedList *new_node = allocate_list();
    if (new_node == NULL) {
        free(item->key);
        free(item->value);
        free(item);
        return;
    }

    new_node->item = item;
    new_node->next = (LinkedList *)ht->array[index];

    ht->array[index] = (hash_node_t *)new_node;
}
