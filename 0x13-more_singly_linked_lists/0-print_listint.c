#include "lists.h"
/**
 * print_listint - print all elements in a listint_t list
 * @h: pointer to the first element of list listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
