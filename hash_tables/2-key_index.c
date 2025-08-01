#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to find the node
 * @size: size of the array of hash table
 * Return: the index in which the datas are stored in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
