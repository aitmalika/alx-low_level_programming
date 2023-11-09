#include "lists.h"

/**
 * print_dlistint - print all this element of a dlistint_t list
 * @h: pointer to this head of tho list
 *
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
