#include "main.h"
/*
 * factorial - disply the factorial of integers
 * @n: function input
 * Return: integer
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
