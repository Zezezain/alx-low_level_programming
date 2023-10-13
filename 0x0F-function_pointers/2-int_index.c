#include "function_pointers.h"
/**
 *int_index -  function that searches for an integer
 *@size: the size of array
 *@array: the array
 *@cmp: to compare
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array && cmp && size)
while (a < size)
{
if (cmp(array[a]))
return (a);
a++;
}
return (-1);
}
