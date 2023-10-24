#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: A pointer to the list to iterate through.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t node_count = 0;

	current = h;  /**Start from the head of the list.*/
	while (current)
	{
		printf("%d\n", current->n);  /**Print the current node's value.*/
		node_count++;
		current = current->next;  /**Move to the next node.*/
	}
	return (node_count);
}
