#include "lists.h"
/**
 * newList - create an array of pointers to track visited nodes
 * @l: the original list of node pointers
 * @s: size of the new list
 * @ptr: pointer to the new node
 * Return: pointer to the new list
 */
listint_t **newList(listint_t **l, size_t s, listint_t *ptr)
{
	listint_t **x;
	size_t i;

	x = malloc((s + 1) * sizeof(listint_t *));
	if (x == NULL)
	{
		free(x);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		x[i] = l[i];
	x[i] = ptr;
	free(l);
	return (x);
}
/**
 * free_listint_safe - free list listint_t
 * @h: pointer to the pointer to the first node of listint_t
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **l = NULL, *n1, *n2;
	size_t i, count = 0;

	if (h == NULL || *h == NULL)
		return (count);
	n1 = *h;
	while (n1 != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (n1 == l[i])
			{
				*h = NULL;
				free(l);
				return (count);
			}
		}
		count++;
		l = newList(l, count, n1);
		n2 = n1->next;
		free(n1);
		n1 = n2;
	}
	free(l);
	*h = NULL;
	return (count);
}
