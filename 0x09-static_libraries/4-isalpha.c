#include "main.h"
/**
 * _isalpha - discover letter or not
 *
 * Discription: detect alphabet or other
 *
 * @c: function parameter
 *
 * Return: 1 if letters 0 otherwise
 */
int _isalpha(int c)
{
int ph = 0;
char l;
char u;
for (l = 97; l <= 122; l++)
{
for (u = 65; u <= 90; u++)
{
if (l == c || u == c)
{
ph = 1;
}
}
}
return (ph);
}
