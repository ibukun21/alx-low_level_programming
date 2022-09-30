#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * Return: Always nothing(void).
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;

	iterator = head;

	while (head)
	{
		iterator = iterator->next;
		free(head);
		head = iterator;
	}
}
