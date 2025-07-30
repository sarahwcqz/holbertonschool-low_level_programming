#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t list
 * @head: ptr to ptr to the first node
 * @index: number of the node that should be deleted
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (temp == NULL)
		return (-1);

	/* if index at beginning of list*/

	if (index == 0)
	{
		if (temp->next != NULL)		/* if list not empty */
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}


	while (i < index)
	{
		temp = temp->next;
		i++;
	}

		/* if index at the end */

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	/* if index in the middle */
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}

}
