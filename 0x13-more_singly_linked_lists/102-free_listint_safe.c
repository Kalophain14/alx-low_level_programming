#include "lists.h"

/**
 * free_listint_safe - Frees a linked list with handling for circular references.
 * @h: Pointer to the first node in the linked list.
 * Return: Number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		next = current->next;
		len++;

		/**Check for circular reference*/
		if (current <= next)
		{
			*h = NULL; /**Avoid infinite loop by setting head to NULL */
			break;
		}

		free(current);
		*h = next;
	}

	return (len);
}
