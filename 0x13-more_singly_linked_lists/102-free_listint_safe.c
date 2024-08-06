#include "lists.h"
/**
 * free_listint_safe - free list listint_t
 * @h: pointer to the pointer to the first node of listint_t
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *n1, *n2, *nodes[100];
	size_t i, idx = 0, count = 0;

	if (h == NULL || *h == NULL)
		return (98);
	n1 = *h;
	while (n1 != NULL)
	{
		for (i = 0; i < idx; i++)
		{
			if (nodes[i] == n1)
			{
				free(n1);
				*h = NULL;
				return (count);
			}
		}
		nodes[idx] = n1;
		idx++;
		n2 = n1;
		n1 = n1->next;
		free(n2);
		count++;
	}
	*h = NULL;
	return (count);
}
