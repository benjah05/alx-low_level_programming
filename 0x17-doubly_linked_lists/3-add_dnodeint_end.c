#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of dlistint_t list
 * @head: pointer to the first node of dlistint_t
 * @n: value/ data of the new node
 * Return: pointer to the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	curr = *head;
	if (curr == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = curr;
		curr->next = newNode;
	}
	return (newNode);
}
