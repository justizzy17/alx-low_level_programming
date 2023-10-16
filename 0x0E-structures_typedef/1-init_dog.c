#include "dog.h"
#include <stddef.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name to initialize
 * @age: age to be initialize
 * @owner: name to be initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
