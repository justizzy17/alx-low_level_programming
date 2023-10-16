#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");

	if (d->owner == NULL)
		printf("Owner: (nil)");

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
		return;
}
		
