#include "hash_tables.h"
/**
 * key_index - get the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
