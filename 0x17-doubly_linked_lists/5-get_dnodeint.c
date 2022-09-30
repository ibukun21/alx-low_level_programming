#include "lists.h"

/**
 * get_dnodeint_at_index - Find the nth node of a dlistint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * @index: the integer that identifies the position of the node in the list.
 *
 * Return: the nth node of a dlistint_t list or NULL if the node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		dlistint_t *iterator;
		unsigned int i;

		iterator = head;

		if (!head)
		{
			return (NULL);
		}
		for (i = 0; i < index; i++)
		{
			if (iterator->next == NULL)
			{
				return (NULL);
			}

			iterator = iterator->next;
		}

		return (iterator);
}
