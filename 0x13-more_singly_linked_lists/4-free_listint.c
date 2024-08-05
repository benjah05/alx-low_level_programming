#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: pointer to the first element of listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n1, *n2;

	if (head == NULL)
		return;
	n1 = head;
	while (n1 != NULL)
	{
		n2 = n1->next;
		free(n1);
		n1 = n2;
	}
}
