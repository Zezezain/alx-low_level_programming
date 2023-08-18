#include "main.h"
/**
 *_isdigit - detect digit
 *@c: function input paramrter
 *Return: Always 0 if dosnot digit 1 if digit
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
