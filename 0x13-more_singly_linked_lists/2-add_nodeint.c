#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 * @head: pointer pointing to head
 * @n: date to be inputted
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_data;

	new_data = malloc(sizeof(listint_t));

	if (new_data == NULL)
		return (NULL);

	new_data->n = n;
	new_data->next = *head;

	*head = new_data;

	return (new_data);
}
