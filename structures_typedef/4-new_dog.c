#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: como llamo al perro pa que venga
  * @age: cuanto lleva vivo
  * @owner: su maistro
  * Return: null if it fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
