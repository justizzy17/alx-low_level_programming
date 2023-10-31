#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: pointer pointing to the first file in the list
 * @index: position of the file
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *current = NULL;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
