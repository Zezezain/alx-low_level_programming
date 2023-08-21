#include "main.h"
/**
 * puts2 - print every character
 * @str: string input
 *
 * Return: print string.
 */

void puts2(char *str)
{
int leng = 0;
char *f = str;
int h = 0;
int n;
while (*f != '\0')
{
f++;
leng++;
}
h = leng - 1;
for (n = 0; n <= h; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
