#include "main.h"
/**
 *print_diagonal - print_diagonal line
 *
 *@n: function input
 *
 */

void print_diagonal(int n)
{
int a;
int b;
for (a = 0; a < n; a++)
{
if (n > 1)
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
