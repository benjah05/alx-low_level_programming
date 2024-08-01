#include "lists.h"
/**
 * add_node - add a new node at the beginning of list_t
 * @head: pointer to the first element of list_t
 * @str: string to be added at the head of list_t
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n1 = malloc(sizeof(list_t));
	unsigned int i = 0;

	n1->str = strdup(str);
	while (str[i] != '\0')
		i++;
	n1->len = i;
	n1->next = *head;
	*head = n1;
	return (*head);
}
