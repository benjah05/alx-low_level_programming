#include "lists.h"
/**
 * reverse_listint - reverse listint_t list
 * @head: pointer to the pointer to the fisrt element of listint_t
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n1 = NULL, *n2 = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		n2 = (*head)->next;
		(*head)->next = n1;
		n1 = *head;
		*head = n2;
	}
	*head = n1;
	return (*head);
}
