#include "main.h"

/**
 *puts_half - print half of string
 *@str: input string parameter
 * Return: Always 0.
 */

void puts_half(char *str)
{
int h;
int n;
int l = 0;
while (str[l] != '\0')
{
l++;
}
h = (l - 1) / 2;
for (n = (h + 1); n < l; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
