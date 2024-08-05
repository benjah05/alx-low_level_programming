#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of list listint_t
 * @head: pointer to the pointer to the first element of listint_t
 * @n: element(integer) to be added to the last node
 * Return: addresss of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n1 = malloc(sizeof(listint_t)), *headPtr;

	if (n1 == NULL)
	{
		free(n1);
		return (NULL);
	}
	n1->n = n;
	n1->next = NULL;
	if (*head == NULL)
		*head = n1;
	else
	{
		headPtr = *head;
		while (headPtr->next != NULL)
			headPtr = headPtr->next;
		headPtr->next = n1;
	}
	return (n1);
}
