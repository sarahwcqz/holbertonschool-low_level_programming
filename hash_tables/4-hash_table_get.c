#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hast table you want to look into
 * @key: the key we are looking for
 * Return: the value associated w/ the key, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *ptr;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}
