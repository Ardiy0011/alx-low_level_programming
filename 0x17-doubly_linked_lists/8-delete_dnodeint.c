#include "lists.h"

/**
 * count - returns the number of nodes in linked list
 * @h: pointer to the 1st node
 * Return: nodes
 */
size_t count(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * at a given index
 * @stack: double pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **stack, unsigned int index)
{
	dlistint_t *current = *stack;
	unsigned int i = 0;

	if (*stack == NULL || count(current) < index + 1)
		return (-1);

	if (!index)
	{
		(*stack) = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}

	while (i < index)
	{
		current = current->next;
		i++;
	}

	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);

	return (1);
}




echo "# monty" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://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@//github.com/Ardiy0011/monty.git
git push -u origin main
https://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@github.com/Ardiy0011/monty.git