#include "main.h"
/**
 *rev_string - reserve a string
 *@s: string input
 *Return: reverse string
 */

void rev_string(char *s)
{
int inc = 0;
char spa = s[0];
int n;
while (s[inc] != '\0')
inc++;
for (n = 0; n < inc; n++)
{
inc--;
spa = s[n];
s[n] = s[inc];
s[inc] = spa;
}
}
