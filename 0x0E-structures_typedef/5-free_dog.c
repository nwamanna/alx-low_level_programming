#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*free_dog - function to create structure dog varaible
*@d: pointer of type dog_t
*
*Return: dog_t
*/
void free_dog(dog_t *d)
{
	free(d);
}
