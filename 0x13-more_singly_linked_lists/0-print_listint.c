#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: struct to be inputted
 * Return: (0) if successful
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (NULL);
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
		h = h->next;
		count++;
		}
	}

	return (count);
}
