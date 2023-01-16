#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - function to create structure dog varaible
*@name: name of dog
*@age: age of dog
*@owner: name of dog owner
*
*Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
