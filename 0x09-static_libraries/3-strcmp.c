#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: input parameter
 *@s2: input parameter
 *Return: s1 s2
 */

int _strcmp(char *s1, char *s2)
{
int b = 0;
while (s1[b] != '\0' && s2[b] != '\0')
{
if (s1[b] != s2[b])
{
return (s1[b] - s2[b]);
}
b++;
}
return (0);
}
