#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *porary;
	unsigned int cnr = 0;

	porary = h;
	while (porary != NULL)
	{
		printf("%d\n", porary->n);
		cnr++;
		porary = porary->next;
	}
	return (cnr);
}
