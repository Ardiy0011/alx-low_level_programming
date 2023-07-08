#include "linked_h"


/**
 * create_LL_and_handle_collision - if collision create a linked list to store excess
 * @table: pointer to the hash table
 * @index: the index where the collision occurred
 * @item: the hash node
 * Return: none
 */
void create_LL_and_handle_collision(hash_table_t *table, unsigned long index, hash_node_t *item)
{
	LinkedList *head = table->array[index]; /* retrieves head of the LL at index */

	if (head == NULL)
	{
		head = allocate_list();
		head->item = item;
		table->array[index] = head;
		return;
	}
	else
	{
		table->array[index] = linkedlist_insert(head, item);
		return;
	}
}


/**
 * allocate_list - Allocates memory for a new LinkedList.
 * Return: Pointer to the newly allocated LinkedList.
 */
LinkedList *allocate_list()
{
	LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
	return (list);
}

/**
 * linkedlist_insert - Inserts an item into a LinkedList.
 * @list: Pointer to the LinkedList.
 * @item: Pointer to the hash_node_t item to be inserted.
 *
 * Return: Pointer to the updated LinkedList.
 */
LinkedList *linkedlist_insert(LinkedList *list, hash_node_t *item)
{
	if (!list)
	{
		LinkedList *head = allocate_list();
		head->item = item;
		head->next = NULL;
		list = head;
		return (list);
	}
	else if (list->next == NULL)
	{
		LinkedList *node = allocate_list();
		node->item = item;
		node->next = NULL;
		list->next = node;
		return (list);
	}

	LinkedList *temp = list;

	while (temp->next->next)
	{
		temp = temp->next;
	}

	LinkedList *node = allocate_list();
	node->item = item;
	node->next = NULL;
	temp->next = node;
	return (list);
}
