#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that calculates lenght of string
 * @s: string to be inputted
 * Return: the lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies from src to dest
 * @dest: where to be copied to
 * @src: where to copy from
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[i] != '\0')
		i++;

	for (len = 0; len < i; len++)
		dest[i] = src[i];

	dest[len] = '\0';

	return (dest);
}

/**
 * new_dog -  function that creates a new dog.
 * @name: first member of the structure
 * @age: second member of the structure
 * @owner: third member of the structure
 * Return: pointer, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_lenght, owner_lenght;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);

	name_lenght = _strlen(name);
	owner_lenght = _strlen(owner);

	new_dog_ptr->name = malloc(sizeof(char) * (name_lenght + 1));
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(sizeof(char) * (owner_lenght + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr);
		free(new_dog_ptr->name);
		return (NULL);
	}

	_strcpy(new_dog_ptr->name, name);
	_strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
