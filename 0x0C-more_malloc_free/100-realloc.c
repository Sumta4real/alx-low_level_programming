#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to new memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_memory;
	unsigned int i, min;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_memory = malloc(new_size);
		return (new_memory);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_memory = malloc(new_size);
	if (new_memory == NULL)
		return (NULL);

	if (new_size > old_size)
		min = old_size;
	else 
		min = new_size;

	for (i = 0; i < min; i++)
		new_memory[i] = (ptr + i);
	
	free(ptr);
	return (new_memory);
}
