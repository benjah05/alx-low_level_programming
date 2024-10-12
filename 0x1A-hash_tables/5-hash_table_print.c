#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0, sep = 0;

	printf("{");
	if (ht == NULL)
	{
		printf("}\n");
		return;
	}
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (sep)
				printf(", ");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			sep = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
