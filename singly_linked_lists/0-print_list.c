#include "lists.h"

/**
 * print_list - prints all the element of a list_t list
 * @h: the pointer to the first struct of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%i] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
