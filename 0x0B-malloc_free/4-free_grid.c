#include <stdlib.h>
#include "main.h"

/**
*free_grid - a function that frees a 2 dimensional grid
*@grid : the function which contains the 2D array
*@height : the height
* Return: nothing 
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
		free(grid);
}
