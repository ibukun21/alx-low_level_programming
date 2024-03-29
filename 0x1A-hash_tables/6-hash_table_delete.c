#include "hash_tables.h"

/**
  * hash_table_delete - function that deletes a hash table.
  * @ht: hash table
  *
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *address;

	if (ht == NULL)
		return;

	if (ht->array != NULL)
	{
		for (j = 0; j < ht->size; j++)
		{
		address = ht->array[j];

		if (address != NULL)
		delete_nodes(address);
		}
		free(ht->array);
	}
	free(ht);
}


/**
 * delete_nodes - print data in a linked list
 * @head: pointer to a linked list
 *
 * Return: void
 */
void delete_nodes(hash_node_t *head)
{

	hash_node_t *next;

	for ( ; head != NULL; head = next)
	{
		next = head->next;

		free(head->key), free(head->value);

		free(head);
	}
}
