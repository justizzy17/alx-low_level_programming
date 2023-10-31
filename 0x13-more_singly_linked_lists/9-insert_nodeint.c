#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 *
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @head: pointer pointing to the fist file in the list
 * @n: data to be inputted
 * Return: new_node if successful, otherwise return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	temp = *head;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = temp;
		temp = new;
		return (new);
	}

	
		while (temp != NULL && count < idx)
		{
			if (count == idx - 1)
			{
				new->next = temp->next;
				temp->next = new;
				return (new);
			}

			else
				temp = temp->next;

			count++;
		}

	return (NULL);
}
