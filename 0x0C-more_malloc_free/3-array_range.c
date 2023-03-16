#include "main.h"


/**
 * array_range - create an array of integers
 *
 * @min: lowest value in the array
 * @max: highest value in the array
 *
 * Return: the pointer to the newly created
 * array(on success), NULL (on failure)
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, arr_size;

	if (min > max)
		return (NULL);

	arr_size = (max - min) + 1;
	arr = (int *)malloc(sizeof(int) * arr_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
		arr[i] = min + i;

	return (arr);
}
