#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: the number of the node to return
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	return (temp);
}
