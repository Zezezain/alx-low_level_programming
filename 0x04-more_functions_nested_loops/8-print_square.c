#include "main.h"
/**
 *print_square - print_square as #
 *
 *@size: function input
 */
void print_square(int size)
{
int a;
int b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
}
}
else
{
_putchar('\n');
}
}
