#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the aa noed a a aparticular posiiton
 * in the list
 * @head: Pointer to the 1st node of the list
 * @index: represents each index in the list
 * Return: The particular node at an index in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int incr = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (incr == index)
			return (temp);
		incr++;
		temp = temp->next;
	}
	return (NULL);
}
