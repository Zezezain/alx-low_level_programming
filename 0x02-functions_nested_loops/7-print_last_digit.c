#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * Discription: using _putchar
 *
 * @r: function parameter
 * Return: last digit of r
 */
int print_last_digit(int r)
{
int num;
if (r < 0)
{
num = -1 * (r % 10);
}
else
{
num = r % 10;
}
_putchar((num % 10) + '0');
return (num % 10);
}
