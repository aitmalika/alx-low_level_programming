include "lists.h"

/**
 * dlistint_len - return the number of the element in a linked dlistint_t list.
 * @h: pointer to the head of this list
 *
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
