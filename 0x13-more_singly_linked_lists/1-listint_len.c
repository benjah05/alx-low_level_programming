#include "lists.h"
/**
 * listint_len - find the number of elements in list listint_t
 * @h: pointer to the first element of list listint_t
 * Return: number of elements in list listint_t
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
