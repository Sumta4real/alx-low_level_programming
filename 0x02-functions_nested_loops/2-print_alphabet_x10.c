#include "main.h"

/**
*print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int increase = 0;

	while (increase <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			 _putchar(ch);
		}               

		_putchar('\n');
		 increase++
	}
}
