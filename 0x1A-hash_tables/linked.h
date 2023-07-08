#ifndef LINKED_H
#define LINKED_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * struct hash_table_s - defines the creation of teh linked list for collision
 *
 * @item: pointer to the hashtable items
 * @next: pointer to thenext node
 **/

typedef struct LinkedList
{
     hash_node_t *item;
     struct LinkedList *next;
} LinkedList;


/**
 * allocate_list - Allocates memory for a new LinkedList.
 * Return: Pointer to the newly allocated LinkedList.
 
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
*/
#endif /*LINKED_H*/