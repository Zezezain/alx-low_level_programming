#include "main.h"
/**
 *_strpbrk -  function that searches a string for any of a set of bytes
 *@accept: checking string
 *@s: old string
 *Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int m;
unsigned int n;
for (n = 0; *(s + n); n++)
{
for (m = 0; *(accept + m); m++)
{
if (*(s + n) == *(accept + m))
break;
}
if (*(accept + m) != '\0')
{
return (s + n);
}
}
return (0);
}
