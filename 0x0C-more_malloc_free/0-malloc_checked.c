#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int type, size of memory to be alloted
 *
 * Return: pointer to the allocated memory(if success)
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
