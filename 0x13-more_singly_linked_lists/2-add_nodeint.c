#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of list listint_t
 * @head: pointer to the pointer to the first element of listint_t
 * @n: the integer to be stored in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n1 = malloc(sizeof(listint_t));

	if (n1 == NULL)
	{
		free(n1);
		return (NULL);
	}
	n1->n = n;
	n1->next = *head;
	*head = n1;
	return (*head);
}
