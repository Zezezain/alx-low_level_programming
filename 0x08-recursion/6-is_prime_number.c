#include "main.h"
/**
 *ca_nu - calculate if the number prime
 *@m: function input
 *@l: divisor
 *Return: (0)
 */
int ca_nu(int m, int l)
{
if (m <= 1 || (m != l && m % l == 0))
{
return (0);
}
else if (m == l)
{
return (1);
}
return (ca_nu(m, l + 1));
}
/**
 *is_prime_number - check the number if prime or not
 *@n: function input
 *Return: intger
 */
int is_prime_number(int n)
{
return (ca_nu(n, 2));
}
