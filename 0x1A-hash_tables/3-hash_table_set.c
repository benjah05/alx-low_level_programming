#include "hash_tables.h"
/**
 * hash_table_set - add an element to a hash table
 * @ht: the hash table we want to add to
 * @key: the key of the new element
 * @value: the value of the new element
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElt, *tmp;
	unsigned long int newIndex;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	newIndex = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[newIndex];
	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	newElt = malloc(sizeof(hash_node_t));
	if (newElt == NULL)
		return (0);
	newElt->key = strdup((char *)key);
	if (newElt->key == NULL)
	{
		free(newElt);
		return (0);
	}
	newElt->value = strdup(value);
	if (newElt->value == NULL)
	{
		free(newElt->key);
		free(newElt);
		return (0);
	}
	newElt->next = ht->array[newIndex];
	ht->array[newIndex] = newElt;
	return (1);
}
