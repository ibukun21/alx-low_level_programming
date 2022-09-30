#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * @idx: the integer that identifies the position of the new node in the list.
 *
 * @n: the data(an integer) that will be saved in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
		dlistint_t *iterator, *new;
		unsigned int i;

		if (h == NULL)
		{
			return (NULL);
		}

		iterator = *h;
		new = malloc(sizeof(dlistint_t));

		if (!new)
		{
			return (NULL);
		}
		new->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				single_connector(new, *h);
			}
			*h = new;
			return (new);
		}
		for (i = 0; i < idx - 1; i++)
		{
			if (iterator->next == NULL)
			{
				free(new);
				return (NULL);
			}
			iterator = iterator->next;
		}
		if (iterator->next != NULL)
		{
			single_connector(new, iterator->next);
		}
		single_connector(iterator, new);
		return (new);
}
