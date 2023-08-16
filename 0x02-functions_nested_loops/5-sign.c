#include "main.h"
/**
 * print_sign - print sign of number
 * Discription: determine the sign
 *@n: function parameter
 * Return: return 1 or 0
 */
int print_sign(int n)
{
int neg = -1;
char ch = (char) neg;
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (ch);
}
}
