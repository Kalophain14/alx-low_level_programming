#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 * @head: A pointer to the head of the list to free.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
