#ifndef DOG_H
#define DOG_H
/**
 * struct dog - atributos del perro
 * @name: como llamo el perro pa que venga
 * @age: cuanto lleva vivo
 * @owner: su maistro
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
