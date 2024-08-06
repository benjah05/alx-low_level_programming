#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to the pointer to the first element of listint_t
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *headPtr;
	int n1;

	if (head == NULL)
		return (0);
	headPtr = *head;
	n1 = headPtr->n;
	*head = headPtr->next;
	free(headPtr);
	return (n1);
}
