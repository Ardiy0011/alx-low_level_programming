#include "lists.h"

/**
 * sum_dlistint - sums all of the data in the linked list
 * @head: pointer to the 1st node in the linked list
 * Return: sum of all datain list 0 ijf empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	do {
		sum += head->n;
		head = head->next;
	} while (head != NULL);
	return (sum);
}
