#include "main.h"
/**
 *create_array - function that creates an array of chars
 *@c: char
 *@size: size of array
 *Return: pointer  size or 0
 */
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
return (0);
while (size--)
m[size] = c;
return (m);
}
