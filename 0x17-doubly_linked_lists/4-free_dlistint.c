#include "lists.h"

/**
 * free_dlistint - frees the a dlistint_t list
 * @head: pointer to the head of this lists
 *
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
