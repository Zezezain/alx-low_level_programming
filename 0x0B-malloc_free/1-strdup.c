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
for (; str[i] != '\0'; size++)
n = malloc(sizeof(char) * (i + 1));
if (n == 0)
return (NULL);
else
{
for (; str[size]; size++)
;
n[size] = str[size];
}
return (n);
}
