#include "lists.h"

/**
 * single_connector - Links two dlistint_t nodes.
 *
 * @first_node: the base node.
 *
 * @second_node: the node that  will be linked.
 *
 * Return: always nothing(void).
 */

void single_connector(dlistint_t *first_node, dlistint_t *second_node)
{
	first_node->next = second_node;
	second_node->prev = first_node;
}

/**
 * sum_dlistint - Compute the sum of all the data of a dlistint_t list.
 *
 * @head: a pointer to the list
 *		  it means a pointer to the HEAD node.
 *
 * Return: the sum of all the data (integers) of a dlistint_t list.
 *		   or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;
	int response;

	iterator = head;
	response = 0;

	if (!head)
	{
		return (response);
	}

	while (iterator)
	{
		response += iterator->n;
		iterator = iterator->next;
	}

	return (response);
}
