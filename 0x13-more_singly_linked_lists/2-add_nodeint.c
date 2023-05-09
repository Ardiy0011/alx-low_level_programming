#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *porary;

	porary = malloc(sizeof(listint_t));
	if (porary == NULL)
		return (NULL);

	porary->n = n;
	porary->next = *head;
	*head = porary;
	return (*head);
}
