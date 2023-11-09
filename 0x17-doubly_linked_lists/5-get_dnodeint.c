#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a dlistint_t linked list.
 * @head: double pointer to this head of the list
 * @index: index of this node to return
 *
 * Return: if this node does not exist, Return NULL
 *          where index is this index of this node, starting from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
