#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointing to the first element of the list
 * Return: integer,otherwise  return 0
 */

int pop_listint(listint_t **head)
{
	int store_data;
	listint_t *temp;

	if (*head ==NULL)
		return (0);

	store_data = (*head)->n;
	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (store_data);
}
