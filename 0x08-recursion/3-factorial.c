#include "main.h"
/**
 *factorial - get the factorial of number
 *
 *@n: factorial input
 *Return: the factorial the number n
 *
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
