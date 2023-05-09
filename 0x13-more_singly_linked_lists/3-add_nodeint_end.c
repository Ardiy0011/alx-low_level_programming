#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *porary, *porary2;

	porary = malloc(sizeof(listint_t));
	if (porary == NULL)
		return (NULL);

	porary->n = n;
	porary->next = NULL;

	if (*head == NULL)
	{
		*head = porary;
		return (porary);
	}

	porary2 = *head;
	while (porary2->next)
		porary2 = porary2->next;
	porary2->next = porary;
	return (porary);
}
