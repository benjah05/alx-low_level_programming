#include "lists.h"
/**
 * add_node_end - add node at the end of list list_t
 * @head: pointer to pointer to the first node of list_t
 * @str: string to add to the tail
 * Return: address of the new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n1 = malloc(sizeof(list_t)), *headPtr;
	unsigned int i = 0;

	if (n1 == NULL)
	{
		free(n1);
		return (NULL);
	}
	n1->str = strdup(str);
	while (str[i] != '\0')
		i++;
	n1->len = i;
	n1->next = NULL;
	if (*head == NULL)
		*head = n1;
	else
	{
		headPtr = *head;
		while (headPtr->next != NULL)
			headPtr = headPtr->next;
		headPtr->next = n1;
	}
	return (n1);
}
