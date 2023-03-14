#include "main.h"

/**
 * create_array - create array of characters
 *
 * @size: size of the array
 * @c: desired character
 * Return:NULL (if fails), pointer to array (if successful)
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
