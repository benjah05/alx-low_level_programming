#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the head of dlistint_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t numNodes = 0;

	if (h == NULL)
		return (0);
	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		numNodes++;
	}
	return (numNodes);
}
