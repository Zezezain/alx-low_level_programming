#include "main.h"
/**
 *_puts - print string follow by new line
 *@str: function string input
 *Return: return 0
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
