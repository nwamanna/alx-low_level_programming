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
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
