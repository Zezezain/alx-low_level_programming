#include "main.h"
/**
 *_strlen_recursion - display the length of string
 *@s: function input
 *Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
