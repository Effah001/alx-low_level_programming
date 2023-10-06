#include "hash_tables.h"

/**
 * key_index - A function that gives the index of the key
 * @key: key
 * @size: size of the hash_table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
