#include "main.h"
/**
 *_strstr -  function that locates a substring
 *@haystack: old string
 *@needle: checking string
 *Return: new string
 *
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
if ((*haystack == *needle && coin(haystack, needle) == 1) || !*needle)
{
return (haystack);
}
else
{
haystack++;
}
}
return (0);
}
/**
 *coin - definr string n inside string m
 *@m: old string
 *@n: checking string
 *Return: 1  if true or 0
 */
int coin(char *m, char *n)
{
while (*n && *n == *m)
{
m++;
n++;
}
if (*n == '\0')
return (1);
else
return (0);
}
