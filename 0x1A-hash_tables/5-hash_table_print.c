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

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (sep == 1)
				printf(", ");
			for (tmp = ht->array[i]; tmp != NULL; sep = 1)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
					printf(", ");
			}
		}
		i++;
	}
	printf("}\n");
}
