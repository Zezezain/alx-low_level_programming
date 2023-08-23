#include "main.h"
/**
 * reverse_array - reverse array
 *@a: array
 *@n: numbers of array elements
 *Return: void
 */

void reverse_array(int *a, int n)
{
int b;
int z;
for (b = 0; b < n--; b++)
{
z = a[b];
a[b] = a[n];
a[n] = z;
}
}
