#include "lists.h"
/**
 * get_nodeint_at_index - find nth node of list listint_t
 * @head: pointer to the first element of listint_t
 * @index: the index at which to retrieve the element
 * Return: the nth node of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n1;
	unsigned int i = 0, len = 0;

	if (head == NULL)
		return (NULL);
	n1 = head;
	while (n1 != NULL)
	{
		len++;
		n1 = n1->next;
	}
	if (index >= len)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
