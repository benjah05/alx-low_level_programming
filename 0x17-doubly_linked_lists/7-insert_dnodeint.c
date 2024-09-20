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

	if (*h == NULL)
		return (NULL);
	curr = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (index == idx)
		{
			newNode->n = n;
			newNode->prev = curr->prev;
			newNode->next = curr;
			if (curr->prev)
				curr->prev->next = newNode;
			curr->prev = newNode;
			return (newNode);
		}
		index++;
		curr = curr->next;
	}
	return (NULL);
}
