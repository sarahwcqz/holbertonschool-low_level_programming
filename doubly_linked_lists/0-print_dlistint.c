#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the first node of the list
 * Return: number of element in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
