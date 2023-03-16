#include "main.h"

/**
 * _calloc - allocates memory to an array using malloc
 *
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 *
 * Return:  pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i,totalsize;
	char *memory;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	totalsize = nmemb * size;
	memory = malloc(totalsize);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < totalsize;  i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
