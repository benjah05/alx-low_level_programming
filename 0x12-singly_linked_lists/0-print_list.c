#include "lists.h"
/**
 * print_list - print all elements of a list_t list
 * @h: pointer to first element of list list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0, Len;
	size_t n = 0;
	char *Str;

	while (h != NULL)
	{
		Str = h->str;
		Len = h->len;
		if (Str == NULL)
			Len = 0;
		printf("[%d] ", Len);
		if (Str == NULL)
		{
			Str = "(nil)";
			Len = 5;
		}
		for (i = 0; i < Len; i++)
			printf("%c", Str[i]);
		printf("\n");
		n++;
		h = h->next;
	}
	return (n);
}
