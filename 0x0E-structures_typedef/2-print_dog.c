#include "dog.h"
#include <stdio.h>
/**
 * print_dog -  function that print the struct.
 * @d: adress of the struct.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	float *p = &d->age;

	if (d == NULL)
		printf("nothing\n");
	else
	{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (p == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}
}
