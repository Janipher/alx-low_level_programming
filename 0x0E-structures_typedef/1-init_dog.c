#include "dog.h"

/**
 * init_dog - function that initialize a variable
 * @d: pointer to initialize the variable
 * @name: name of the dog
 * @age: age of dog
 * @owner: the ownwer of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
