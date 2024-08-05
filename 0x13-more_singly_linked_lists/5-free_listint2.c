#include "lists.h"
/**
 * free_listint2 - free list listint_t and set the head to NULL
 * @head: pointer to the pointer to the first element of listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *n1, *n2;

	if (head == NULL)
		return;
	n1 = *head;
	while (n1 != NULL)
	{
		n2 = n1->next;
		free(n1);
		n1 = n2;
	}
	*head = NULL;
}
