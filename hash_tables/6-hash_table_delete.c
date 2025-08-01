#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *temp;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
