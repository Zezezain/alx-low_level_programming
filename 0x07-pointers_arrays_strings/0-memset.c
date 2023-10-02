#include "main.h"
/**
 *_memset - function that fill memory with value
 *@n: numbers of bytes
 *@s: the address of memory
 *@b: the value
 *Return: array with values
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
