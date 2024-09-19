#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the first node of dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *nodeN;

	curr = head;
	while (curr != NULL)
	{
		nodeN = curr;
		curr = curr->next;
		free(nodeN);
	}
	head = NULL;
}
