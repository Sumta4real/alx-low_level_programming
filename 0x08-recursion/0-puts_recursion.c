#include "main.h"

/**
 * void _puts_recursion - 
 */

void _puts_recursion(char *s)
{	
	if (*s == '\0')
	{	
		_putchar('\n')
	}
	_putchar(*s);
	s++;
	_puts_recusrion(s);
}
