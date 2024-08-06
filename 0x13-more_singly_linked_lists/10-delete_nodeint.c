#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at an index of list listint_t
 * @head: pointer to the pointer of the first element of listint_t
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *headPtr, *n1, *n, *n2;
	unsigned int i = 0, len = 0;

	if (*head == NULL)
		return (-1);
	headPtr = *head;
	while (headPtr != NULL)
	{
		len++;
		headPtr = headPtr->next;
	}
	if (index > len)
		return (-1);
	n = *head;
	if (index == 0)
	{
		n2 = n->next;
		*head = n2;
		free(n);
		return (1);
	}
	n1 = *head;
	n2 = *head;
	for (i = 0; i < index - 1; i++)
		n1 = n1->next;
	for (i = 0; i < index; i++)
		n = n->next;
	for (i = 0; i < index + 1; i++)
		n2 = n2->next;
	n1->next = n2;
	free(n);
	return (1);
}
