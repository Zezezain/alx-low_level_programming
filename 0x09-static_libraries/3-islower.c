#include "main.h"
/**
 * _islower - to discover if alphbet is lowecase or not
 *
 * Discription: by using _putchar
 * @c: ditict alphabets
 *
 * Return: 1 if correct 0 if not
 */
int _islower(int c)
{
char ph;
int l = 0;
for (ph = 97; ph <= 122; ph++)
{
if (ph == c)
{
l = 1;
}
}
return (l);
}
