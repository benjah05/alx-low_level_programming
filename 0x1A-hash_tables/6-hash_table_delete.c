#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			if (tmp->key != NULL)
				free(tmp->key);
			if (tmp->value != NULL)
				free(tmp->value);
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
