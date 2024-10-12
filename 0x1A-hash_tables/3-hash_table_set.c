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
	hash_node_t *newElt;
	unsigned long int newIndex;

	if (key == NULL || strlen(key) == 0)
		return (0);
	newElt = malloc(sizeof(hash_node_t));
	if (newElt == NULL)
		return (0);
	newElt->key = (char *)key;
	newElt->value = strdup(value);
	if (newElt->value == NULL)
	{
		free(newElt);
		return (0);
	}
	newElt->next = NULL;
	newIndex = key_index((const unsigned char *)key, ht->size);
	if (ht->array[newIndex] != NULL)
		newElt->next = ht->array[newIndex];
	ht->array[newIndex] = newElt;
	return (1);
}
