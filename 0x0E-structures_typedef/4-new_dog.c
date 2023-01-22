#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if not successful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l = 0, m = 0, n;
	dog_t *didi;

	while (name[l] != '\0')
		l++;
	while (owner[m] != '\0')
		m++;
	didi = malloc(sizeof(dog_t));
	if (didi == NULL)
	{
		free(didi);
		return (NULL);
	}
	for (n = 0; n <= l; n++)
		didi->name[n] = name[n];
	didi->age = age;
	didi->owner = malloc(m * sizeof(didi->owner));
	if (didi->owner == NULL)
	{
		free(didi->owner);
		free(didi->name);
		free(didi);
		return (NULL);
	}
	for (n = 0; n <= m; n++)
		didi->owner[n] = owner[n];
	return (didi);
}
