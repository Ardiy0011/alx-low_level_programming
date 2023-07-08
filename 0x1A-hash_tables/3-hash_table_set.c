#include "hash_tables.h"
#include "linked.h"
/**
 * update_node_value - Update the value of a node with a given key.
 * @node: Pointer to the node.
 * @value: The new value to be assigned.
 */
void update_node_value(hash_node_t *node, const char *value)
{

	free(node->value);
	node->value = strdup(value);

}

/**
 * create_new_node - Create a new node with the given key and value.
 * @key: The key to be assigned.
 * @value: The value to be assigned.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
	free(new_node->key);
	free(new_node);
	return (NULL);
	}

	new_node->next = NULL;

	return (new_node);

	}


/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
	if (strcmp(current->key, key) == 0)
	{
		update_node_value(current, value);
		return (1);
	}
	current = current->next;
	}

	new_node = create_new_node(key, value);
	if (new_node == NULL)
	return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
