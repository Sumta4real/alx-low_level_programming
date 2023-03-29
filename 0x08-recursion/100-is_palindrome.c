#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
* str_vs_reverse - compares string vs string reverse
* @s: string
* @l: length
*
* Return: On success 1.
* On error, -1 is returned
*/

int str_vs_reverse(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*s == 0)
		return (1);
	return (palind3(s + 1, l - 2));
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (str_vs_reverse(s, len));
}
