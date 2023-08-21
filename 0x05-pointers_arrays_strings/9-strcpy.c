#include "main.h"
/**
 *char *_strcpy - copy the string pointed
 *@src: copy from
 *@dest: copy to
 *Return: return string
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int b;
while (*(src + 1) != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
