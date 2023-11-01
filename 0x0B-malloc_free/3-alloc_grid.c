#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 *	 to a 2 dimensional array of integers.
 *
 * @width: first integer input
 * @height: second integer input
 *
 * Return: If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
int j, i;

if (width <= 0 || height <= 0)
{
return ('\0');
}

int **grid = malloc(height * sizeof(int));

if (grid == NULL)
{
return ('\0');
}

for (i = 0; i < height; ++i)
{
grid[i] = malloc(width * sizeof(int));

if (grid[i] == NULL)
{
for (j = 0; j < i; ++j)
{
free(grid[j]);
}
free(grid);
return ('\0');
}

for (j = 0; j < width; ++j)
{
grid[i][j] = 0;
}
}
return (grid);
}
