#include "lists.h"
/**
 * free_list - free list list_t
 * @head: pointer to the first node(head)
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n1, *n2;

	if (head == NULL)
		return;
	n1 = head;
	while (n1 != NULL)
	{
		n2 = n1->next;
		free(n1->str);
		free(n1);
		n1 = n2;
	}
}
