#include "main.h"
/**
 * _islower - to discover if alphbet is lowecase or not
 *
 * Discription: by using _putchar
 * @c: ditict alphabets
 *
 * Return: 1 if correct
 */
int _islower(int c)
{
char ph;
int l;
for (ph = 97; ph <= 122; ph++)
{
if (ph == c)
{
l = 1;
}
}
return (l);
}
