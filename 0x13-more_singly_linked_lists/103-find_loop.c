#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to the first node of the linked list
 * Return: address of the node where the loop starts
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1, *n2;

	if (head == NULL)
		return (NULL);
	n1 = head;
	n2 = head;
	while (n1 && n2 && n2->next != NULL)
	{
		n1 = n1->next;
		n2 = (n2->next)->next;
		if (n1 == n2)
			break;
	}
	if (n1 != n2)
		return (NULL);
	n1 = head;
	while (n1 != n2)
	{
		n1 = n1->next;
		n2 = n2->next;
	}
	return (n2);
}
