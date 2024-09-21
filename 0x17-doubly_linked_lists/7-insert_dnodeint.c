#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the first node of dlistint_t list
 * @idx: the index to insert at
 * @n: the data to insert at index idx
 * Return: address of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *newNode;
	unsigned int index = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	curr = *h;
	while (curr != NULL && index < idx)
	{
		curr = curr->next;
		index++;
	}
	if (curr->next == NULL && index == idx)
		return (add_dnodeint_end(h, n));
	newNode->n = n;
	newNode->prev = curr;
	newNode->next = curr->next;
	curr->next->prev = newNode;
	curr->next = newNode;
	return (newNode);
}
