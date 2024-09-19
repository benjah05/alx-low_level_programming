#include "lists.h"
/**
 * sum_dlistint - sum of all data of a dlistint_t list
 * @head: pointer to the first node of dlistint_t list
 * Return: sum of all data(n), 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum = 0;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
