#include "function_pointers.h"
/**
 *print_name - a function that prints a name
 *@f: function pointer
 *@name: the name of string
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
