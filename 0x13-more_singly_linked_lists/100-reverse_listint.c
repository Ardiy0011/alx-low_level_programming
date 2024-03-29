#include "lists.h"

/**
 * reverse_listint - Reverses a list.
 * @head: Pointer to a pointer to the first node of a list.
 * Return: Pointer to the new head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;

while (current != NULL)
{
listint_t *next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;

return (*head);
}
