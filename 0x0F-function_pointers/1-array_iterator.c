#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given
 *@size: sise of array
 *@action: function pointer
 *@array: the array
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *last = array + size - 1;
if (array && action && size)
while (array <= last)
action(*array++);
}
