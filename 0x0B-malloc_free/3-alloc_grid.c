#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*alloc_grid - creates a two dimensional array of int
*@width: rows
*@height: columns
*
*Return: pointer to new allocaated memory or null if it fails
*/
int **alloc_grid(int width, int height)
{
	int **grid = (int **) malloc(sizeof(height) * height);
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(width) * width);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}
	return (grid);
}
