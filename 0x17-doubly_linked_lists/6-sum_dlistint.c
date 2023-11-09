#include "lists.h"

/**
 *  sum_dlistint - return this sum of all
 * the data (n) of a dlistint_t linked list
 * @head: double pointer to this head of this list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
	
}
