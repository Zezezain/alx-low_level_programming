#include "main.h"

/**
 *print_array - print n elements of array
 *@a: array
 *@n: numbers of input
 * Return: a and n
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < (n - 1); b++)
{
printf("%d, ", a[b]);
}
if (b == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
