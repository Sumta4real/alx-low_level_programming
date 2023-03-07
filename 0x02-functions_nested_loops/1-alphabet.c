#include "main.h"

/**
 * main - This file prints all alphabets in lower case
 */

void print_alphabet(void)
{       
        char ch = 'a';
        for (ch='a'; ch <='z'; ch++)
        {
               _putchar(ch);
        }
        _putchar('\n');
}       
