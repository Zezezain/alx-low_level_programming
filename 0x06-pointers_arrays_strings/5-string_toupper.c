#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercas
 *@n: pointer
 *Return: n
 */

char *string_toupper(char *n)
{
int a = 0;
while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = n[a] - 32;
a++;
}
return (n);
}
