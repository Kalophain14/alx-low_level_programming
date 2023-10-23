#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: A pointer to the list to iterate through.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t node_count = 0;

	while (current_node)
	{
		printf("%d\n", current_node->n);
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
