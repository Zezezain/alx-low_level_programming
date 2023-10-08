#include "main.h"
/**
 *array_range -  function that creates an array of integers
 *@min: start intger
 *@max: max int
 *Return: arrays of integers
 */
int *array_range(int min, int max)
{
int l;
int a;
int *ptr;
if (min > max)
return (NULL);
l = max - min + 1;
ptr = malloc(sizeof(int) * l);
if (!ptr)
return (NULL);
for (a = 0; a < l; a++)
ptr[a] = min++;
return (ptr);
}
