#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the pointer to the first element of listint_t
 * @idx: index of list where the new node should be added
 * @n: the data to be added at index idx
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *num = malloc(sizeof(listint_t)), *h, *n1, *n2;
	unsigned int i = 0, len = 0;

	if (head == NULL || *head == NULL || num == NULL)
		return (NULL);
	h = *head;
	if (h != NULL)
	{
		len++;
		h = h->next;
	}
	if (idx > len)
		return (NULL);
	num->n = n;
	if (idx == 0)
	{
		num->next = *head;
		*head = num;
		return (num);
	}
	n1 = *head;
	for (i = 0; i <= idx - 1; i++)
		n1 = n1->next;
	n2 = n1;
	n1->next = num;
	num->next = n2;
	return (num);
}
