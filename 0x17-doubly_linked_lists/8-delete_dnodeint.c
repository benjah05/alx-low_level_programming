#include "lists.h"
/**
 * delete_dnodeint_at_index - delete at a node at index index
 * @head: pointer to the first node of dlistint_t list
 * @index: index to delete at
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *nodeN;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	curr = *head;
	while (curr != NULL)
	{
		if (index == i)
		{
			nodeN = curr;
			if (curr == *head)
			{
				if (curr->next)
					curr->next->prev = NULL;
				*head = curr->next;
			}
			else
			{
				if (curr->prev)
					curr->prev->next = nodeN->next;
				if (curr->next)
					curr->next->prev = nodeN->prev;
			}
			free(nodeN);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
