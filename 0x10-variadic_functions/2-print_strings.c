#include "variadic_functions.h"
/**
 *print_strings - print string with seprater
 *@separator: the string
 *@n: the number of arg
 *@...: the integer to print
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list ap;
char *str;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(ap);
}
