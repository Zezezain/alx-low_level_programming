#include "dog.h"

/**
 *init_dog - initializing a dog
 *@d: the dog init
 *@name:the name of dog
 *@age: the name of owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
