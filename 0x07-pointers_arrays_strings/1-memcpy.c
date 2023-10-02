#include "main.h"
/**
 *_memcpy - function that copy memory area
 *@n: numbers of bytes
 *@dest: stored memorry
 *@src: first memory
 *Return: stored copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = n;
int f = 0;
for (; f < i; f++)
{
dest[f] = src[f];
n--;
}
return (dest);
}
