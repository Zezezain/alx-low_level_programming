#include "main.h"
/**
 *_puts - print string follow by new line
 *@str: function string input
 *Return: return 0
 */

void _puts(char *str)
{
for (str = 0; *str != '\0'; str++)
{
_putchar(*str + 0);
}
_putchar('\n');
}
