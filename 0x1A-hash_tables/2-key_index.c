#include "hash_tables.h"

/**
 * key_index - a function that returns the key index
 * @key: key of the hash table
 * @size: size of the table
 * Return:  index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;
	unsigned long int index;

	value = hash_djb2(key);
	index = value % size;

	return (index);
}

