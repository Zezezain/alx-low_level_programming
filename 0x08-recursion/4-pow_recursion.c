#include "main.h"
/**
 *_pow_recursion - the power of value
 *@x: function input integer
 *@y: power
 *Return: intger
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
