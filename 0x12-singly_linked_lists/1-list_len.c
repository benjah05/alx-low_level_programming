#include "lists.h"
/**
 * list_len - find number of elements in a linked list list_t
 * @h: pointer to the first element in list list_t
 * Return: number of elements in list list_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
