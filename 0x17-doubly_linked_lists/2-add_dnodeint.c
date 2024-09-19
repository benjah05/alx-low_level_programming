#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to the first node of dlistint_t
 * @n: value at the new node
 * Return: address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr;

	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		curr->n = n;
		curr->prev = NULL;
		curr->next = NULL;
		*head = curr;
	}
	else
	{
		curr->n = n;
		curr->prev = NULL;
		curr->next = *head;
		(*head)->prev = curr;
		*head = curr;
	}
	return (curr);
}
