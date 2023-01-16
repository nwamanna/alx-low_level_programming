#ifndef _DOG_H_
#define _DOG_H_
/**
*struct dog - this structure contains details on name, age and owner of dog
*@name: name of dog
*@age: age of dog
*@owner: name of dog owner
*
*Description: name and owner are pointers with type char, age is an integer
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
*dog_t - typedef to structure dog
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
