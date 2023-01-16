#include <stdio.h>
#include "dog.h"
/**
*init_dog - function to initialize a structure dog
*@d: pointer to struct dog
*@name: name of dog
*@age: age of dog
*@owner: name of dog owner
*
*Return: Void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

}
