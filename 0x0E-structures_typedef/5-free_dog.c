#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t
 * @d: pointer to dog_t to be freed
 *
 * Return: no return value
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

