#include "main.h"
/**
 *_strdup - function returns a pointer to a new string
 *@str: string
 *Return: pointer
 */
char *_strdup(char *str)
{
int size = 0;
char *n;
int i = 0;
if (str == NULL)
return (NULL);
for (; str[size] != '\0'; size++)
n = malloc(size * sizeof(*str) + 1);
if (n == 0)
return (NULL);
else
{
for (; i < size; i++)
;
n[i] = str[i];
}
return (n);
}
