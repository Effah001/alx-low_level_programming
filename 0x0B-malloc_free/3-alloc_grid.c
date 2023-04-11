#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
	{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
	{
		free(grid[j]);
	}
	
	free(grid);
		return NULL;
	}
   
	for (j = 0; j < i; j++)
	{
		grid[i][j] = 0;
	}
	}
		return grid;
}
