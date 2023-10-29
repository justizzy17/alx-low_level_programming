#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a
 * new node at the end of a listint_t list.
 * @head: pointer pointing to the first element
 * @n: new data to be inputted
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_data, *temp;

	new_data = malloc(sizeof(listint_t));

	if (new_data == NULL)
		return (NULL);

	new_data->n = n;
	new_data->next = NULL;

	if (*head == NULL)
		*head = new_data;

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_data;
	}
	return (new_data);
}
