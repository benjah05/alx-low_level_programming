#include "lists.h"
/**
 * print_listint_safe - print linked list listint_t
 * @head: pointer to the first node of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n1, *nodes[100];
	size_t i, idx = 0, count = 0;

	if (head == NULL)
		return (98);
	n1 = head;
	while (n1 != NULL)
	{
		for (i = 0; i < idx; i++)
		{
			if (nodes[i] == n1)
			{
				printf("-> [%p] ", (void *)n1);
				printf("%d\n", n1->n);
				return (count);
			}
		}
		nodes[idx] = n1;
		idx++;
		printf("[%p] ", (void *)n1);
		printf("%d\n", n1->n);
		count++;
		n1 = n1->next;
	}
	return (98);
}
