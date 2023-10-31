#include "lists.h"
#include<stdlib.h>

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to the first node argument
 * @index: argument count
 * Return: NULL if empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL && count < index)
	{
			current = current->next;

		count++;
	}
	return (current);
}

