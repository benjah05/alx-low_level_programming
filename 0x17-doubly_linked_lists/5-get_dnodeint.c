#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node of a dlistint_t list
 * @head: pointer to the first node of a dlistint_t list
 * @index: node to be returned
 * Return: node, NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
