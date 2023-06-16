#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of list
 * @head: pointer to first node
 * @n: the data
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t* temp;
    temp = malloc(sizeof(dlistint_t));
    if (temp == NULL) {
        return NULL;
    }
    temp->prev = NULL;
    temp->n = n;
    temp->next = *head;
    if (*head != NULL) {
        (*head)->prev = temp;
    }
    *head = temp;
    return (*head);
}
