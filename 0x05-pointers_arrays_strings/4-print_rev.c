#include "main.h"
/**
 *print_rev - print string in revese
 *@s: input parameter
 *Return: return 0
 */

void print_rev(char *s)
{
int leng = 0;
int r;
while (*s != '\0')
{
leng++;
s++;
}
s--;
for (r = leng; r > 0; r--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
