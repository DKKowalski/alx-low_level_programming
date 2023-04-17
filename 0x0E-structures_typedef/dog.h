#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct representing a dog with a name, age, and owner
 *
 * @name: name of the dog as a string
 * @age: age of the dog as a float
 * @owner: name of the dog's owner as a string
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

#endif /* DOG_H */

