#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a function that crerate a strcut dog_h.
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Return: adress to struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
		return (NULL);
	strcpy(p->name, name);
	p->age = age;
	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
		return (NULL);
	strcpy(p->owner, owner);
	return (p);
}
