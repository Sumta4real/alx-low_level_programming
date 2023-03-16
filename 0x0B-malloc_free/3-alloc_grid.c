#include "main.h"


/**
 * alloc_grid - returns a pointer to a 2-d array of integers.
 *
 * @width: width of the matrix (no of columns)
 * @height: height of thee matrix (no of rows)
 *
 * Return: pointer to a 2-d array of integer(success), NULL(failure)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int**)malloc(sizeof(int*)*height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}

	for (i = 0; i < height; i++;)
	{
		for (j = 0; j < width; j++;)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
