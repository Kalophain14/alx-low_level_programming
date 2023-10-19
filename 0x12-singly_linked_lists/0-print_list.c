#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list
 * Return: The number of nodes list
 */

size_t print_list(const list_t *h)
{
	const list_t *temporary; /**declares pointer to structlist*/
	size_t r = 0; /**counter*/

	/**checks if pointer h and string isnt null*/
	if (h && h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		temporary = h;
		if (temporary)
			temporary = h;
		while (temporary)
		{
			printf("[%d] %s\n", temporary->len, temporary->str);
			r++;
			temporary = temporary->next;
		}
	}
	return (r);
}
