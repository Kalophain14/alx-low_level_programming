#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list.
 * @h: Pointer to the linked list of type listint_t to print.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);  /**Prints the current node. */
		count++;
		head = head->next;  /**Move to the next node.*/
	}
	return (count);
}
