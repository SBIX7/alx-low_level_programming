#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - function that initilize a type.
 * @d: name of the type.
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
