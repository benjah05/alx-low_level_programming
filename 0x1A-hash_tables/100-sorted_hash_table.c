#include "hash_tables.h"
/**
 * shash_table_create - create hash table
 * @size: size of the hash table
 * Return: the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}
/**
 * shash_table_set - add an element to a hash table
 * @ht: the hash table we want to add to
 * @key: the key of the new element
 * @value: the value of the new element
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newElt, *tmp;
	unsigned long int newIndex;
	char *key_copy, *value_copy;

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
	newElt = malloc(sizeof(shash_node_t));
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
