#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list
 * @str: string to be added in the node
 *
 * Return: address of new element, otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_struct;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new_struct = malloc(sizeof(list_t));
	if (!new_struct)
		return (NULL);

	new_struct->str = strdup(str);
	new_struct->len = lenght;
	new_struct->next = (*head);
	(*head) = new_struct;

	return (*head);
}
