#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function print the leng
 * @str: string
 * Return: the length
 */
int _strlen(const char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 *_strcopy - return destinatin with copy
 *@src: string of copy
 *@dest: copy of string
 *Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 *new_dog - fuction print new dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: pointer dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
