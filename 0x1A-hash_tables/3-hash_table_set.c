#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    // Create a new item
    hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));
    item->key = (char *)malloc(strlen(key) + 1);
    item->value = (char *)malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);

    // Compute the index
    unsigned long int index = hash_function(key) % ht->size;

    // Check if there is a collision
    if (ht->array[index] == !NULL)
    {
        create_LL__and_handle_collision(ht, index, item);
    }

    return (1);
}





// Function to add node at the beginning of the list(SAVE SOMEWHERE ELSE NOT PART OF TEH QUESTION REQUIREMNTS)
void create_LL_and_handle_collision(hash_table_t *table, unsigned long index, hash_node_t *item)
{
    LinkedList *head = table->overflow_buckets[index];

    if (head == NULL)
    {
        // Creates the list.
        head = allocate_list();
        head->item = item;
        head->next = NULL;
        table->overflow_buckets[index] = head;
    }
    else
    {
        // Insert to the list.
        table->overflow_buckets[index] = linkedlist_insert(head, item);
    }
}

LinkedList* allocate_list()
{
    // Allocates memory for a LinkedList pointer.
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    return list;
}

LinkedList* linkedlist_insert(LinkedList* list, Ht_item* item)
{
    // Inserts the item onto the LinkedList.
    if (list == NULL)
    {
        LinkedList* head = allocate_list();
        head->item = item;
        head->next = NULL;
        list = head;
        return list;
    }
    else if (list->next == NULL)
    {
        LinkedList* node = allocate_list();
        node->item = item;
        node->next = NULL;
        list->next = node;
        return list;
    }

    LinkedList* temp = list;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    LinkedList* node = allocate_list();
    node->item = item;
    node->next = NULL;
    temp->next = node;
    return list;
}
