#include "main.h"
/**
 *sq_generation - function that returns the natural square root of a number
 *_sqrt_recursion - function that returns the natural square root of a number
 *@l: function input
 *@m: function input
 *Return: square root of a number
 */

int sq_generation(int l, int m)
{
if (m * m == l)
{
return (m);
}
else if (m * m > l)
{
return (-1);
}
return (sq_generation(l, m + 1));
}
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: function input
 *Return: square root of a number
 */

int _sqrt_recursion(int n)
{
return (sq_generation(n, 0));
}
