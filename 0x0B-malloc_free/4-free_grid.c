#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*free_grid - frees memory allocated to a 2 dimensional array
*@grid: pointer to 2 dimensional array
*@height: columns
*
*Return: Void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
