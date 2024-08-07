#include "lists.h"
/**
 * new_list - create an array of pointers to track visited nodes
 * @l: the original list of node pointers
 * @s: size of the new list
 * @ptr: pointer to the new node
 * Return: pointer to the new list
 */
const listint_t **new_list(const listint_t **l, size_t s, const listint_t *ptr)
{
	const listint_t **x;
	size_t i;

	x = malloc(s * sizeof(listint_t *));
	if (x == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		x[i] = l[i];
	x[i] = ptr;
	free(l);
	return (x);

}
/**
 * print_listint_safe - print listint_t linked list
 * @head: pointer to the first node of listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **l = NULL, *n1;
	size_t i, count = 0;

	if (head == NULL)
		return (count);
	n1 = head;
	while (n1 != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (n1 == l[i])
			{
				printf("-> [%p] ", (void *)n1);
				printf("%d\n", n1->n);
				free(l);
				return (count);
			}
		}
		count++;
		l = new_list(l, count, n1);
		printf("[%p] ", (void *)n1);
		printf("%d\n", n1->n);
		n1 = n1->next;
	}
	free(l);
	return (count);
}
