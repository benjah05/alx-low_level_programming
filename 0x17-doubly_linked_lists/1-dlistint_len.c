#include "lists.h"
/**
 * dlistint_len - find the number of elements in dlistint_t list
 * @h: pointer to the first node of dlistint_t list
 * Return: number of nodes in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t numNodes = 0;

	if (h == NULL)
		return (0);
	curr = h;
	while (curr != NULL)
	{
		curr = curr->next;
		numNodes++;
	}
	return (numNodes);
}
