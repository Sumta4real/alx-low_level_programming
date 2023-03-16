#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of first s2 characters to be used
 *
 * Return: pointer to the new strng formed(if success0, NULL(if failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i , j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
