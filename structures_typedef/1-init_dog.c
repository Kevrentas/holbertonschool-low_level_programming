#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - write a function that initialize a variable of type struct dog
 * @d: los atributos del casco'e perro
 * @name: como llamo al perro pa que venga
 * @age: cuanto lleva vivo
 * @owner: su maistro
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
