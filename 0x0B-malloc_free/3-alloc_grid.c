/**
* alloc_grid - function that allocates memory for a 2D grid of integers
* @width: width of the grid
* @height: height of the grid
* Return: pointer to the newly allocated grid or
* NULL if width or height is <= 0
* Author: NourMellal
*/
#include "main.h"
int **alloc_grid(int width, int height)
{
int **twod;
int hgt_index, wid_index;

if (width <= 0 || height <= 0)
	return (NULL);

twod = malloc(sizeof(int *) * height);

if (twod == NULL)
	return (NULL);

for (hgt_index = 0; hgt_index < height; hgt_index++)
{
	twod[hgt_index] = malloc(sizeof(int) * width);

	if (twod[hgt_index] == NULL)
	{
		for (; hgt_index >= 0; hgt_index--)
			free(twod[hgt_index]);

		free(twod);
		return (NULL);
	}
}

for (hgt_index = 0; hgt_index < height; hgt_index++)
{
	for (wid_index = 0; wid_index < width; wid_index++)
		twod[hgt_index][wid_index] = 0;
}
return (twod);

}
