#include "main.h"
/**
 *_strncpy - copes two strings
 *@dest: input parameter
 *@src: input parameter
 *Return: void
 *@n: input parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
int b = 0;
while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
