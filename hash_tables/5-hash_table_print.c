#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("'%s': '%s', ", ptr->key, ptr->value);
				ptr = ptr->next;
			}
			i++;
		}
		printf("}\n");
	}
}
