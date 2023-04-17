#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 *
 * Return: Nothing
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

