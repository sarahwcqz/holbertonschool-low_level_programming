#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to ptr to first node
 * @idx: index of the list where to add the new node
 * @n: the data to initialize the new node with
 * Return: the address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *new_node;

	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL && i < idx - 1)		/* si l'index est plus grand que la liste aka si on arrive a un node nul mais que i est pas arrive jsq idx */
			return (NULL);
		i++;
	}
	/* ------------- ajout en fin de liste -----------*/
	if (temp == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		temp->prev->next = new_node;
	}

/*------------ ajout au milieu ---------------------*/
	else
	{
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;					/* init le node*/
	new_node->prev = temp->prev;
	new_node->next = temp;
	if (temp->prev != NULL)				/* si on est pas en bout de liste on relie le precedent au new */
		temp->prev->next = new_node;
	temp->prev = new_node;				/*on relie celui d'apres au new one */
	}
/* ------   ajout en debut de liste ------- */
	if (idx == 0)
		*h = new_node;

	return (new_node);
}
