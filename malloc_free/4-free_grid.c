#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - It's not bragging if you can back it up
 *@grid: argument
 *@height: argument
 * Return: bunch o' numbers
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
