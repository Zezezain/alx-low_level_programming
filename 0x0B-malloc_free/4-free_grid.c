#include "main.h"
/**
 *free_grid -  function that frees a 2 dimensional grid
 *@height: the height
 *@grid: spce of mem
 *Return: void
 */
void free_grid(int **grid, int height)
{
int f;
for (; f < height; f++)
free(grid[f]);
free(grid);
}
