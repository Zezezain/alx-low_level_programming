#include "main.h"
/**
 *times_table - display time table 9
 *times table
 *Discription: function print time 9
 */
void times_table(void)
{
int g;
int h;
int j;
for (g = 0; g <= 9; g++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (h = 0; h <= 9; h++)
{
j = (g * h);
if ((j / 10) > 0)
{
_putchar((j / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((j % 10) + '0');
if (h < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
