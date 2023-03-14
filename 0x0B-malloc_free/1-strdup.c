#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string given
 * Return:NULL (if fails), pointer to duplicated string (if successful)
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	duplicate_str = malloc(sizeof(char) * (len + 1));

	if (duplicate_str == NULL)
	{
		return (NULL)
	}

	while ((duplicate_str[i] = str[i]) != '\0')
	{
		i++;
	}
	return (duplicate_str);

}
