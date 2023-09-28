#include "main.h"

/**
 * _puts_recursion - to display string folloed by new line
 * @s: function input
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}
}
