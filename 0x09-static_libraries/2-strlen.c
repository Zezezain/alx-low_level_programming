#include "main.h"
/**
 *_strlen - returns the length of string
 *@s: string input parameter
 *Return: return string length
 */

int _strlen(char *s)
{
int leng = 0;
while (*s != '\0')
{
leng++;
s++;
}
return (leng);
}
