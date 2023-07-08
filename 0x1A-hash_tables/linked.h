#ifndef LINKED_H
#define LINKED_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * struct LinkedList - defines the creation of teh linked list for collision
 *
 * @item: pointer to the hashtable items
 * @next: pointer to thenext node
 */
typedef struct LinkedList
{
	hash_node_t *item;
	struct LinkedList *next;

} LinkedList;

#endif /*LINKED_H*/
