#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
newdog->name = malloc(strlen(name) + 1);
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
strcpy(newdog->name, name);

newdog->age = age;

newdog->owner = malloc(strlen(owner) + 1);
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
strcpy(newdog->owner, owner);

return (newdog);
}

