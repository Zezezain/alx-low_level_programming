#include "main.h"
/**
 *_strspn -  function that gets the length of a prefix substring
 *@accept: checking string
 *@s: old string
 *Return: new string
 */
unsigned int _strspn(char *s, char *accept)
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
if (*(accept + m) == '\0')
break;
}
return (n);
}
