#include "lists.h"
/**
 * sum_listint - find the sum of all data(n) in list listint_t
 * @head: pointer to the first datum of listint_t
 * Return: the sum of all data in listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
