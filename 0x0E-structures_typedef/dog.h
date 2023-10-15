#ifndef DOC_H
#define DOC_H

/**
 * struct dog - a dog struct
 * @age: age of dog
 * @owner: name of owner
 * @name:name of dog
 *Description: alone dog struct in a big kitty world
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
