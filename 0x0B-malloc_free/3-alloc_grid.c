#include "main.h"
/**
 ***alloc_grid -  function returns a pointer
 *@width: the width of array
 *@height: the height of array
 *Return: a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **m;
int i, j;
m = malloc(sizeof(*m) * height);
if ((height <= 0) || (width <= 0) || (m == 0))
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
m[i] = malloc(sizeof(**m) *  width);
if (m[i] == 0)
{
while (i--)
free(m[i]);
free(m);
return (NULL);
}
for (j = 0; j < width; j++)
m[i][j] = 0;
}
}
return (m);
}
