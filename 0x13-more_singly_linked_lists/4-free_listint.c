#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer pointing to the first list
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
