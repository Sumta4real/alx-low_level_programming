#include <stdio.h>

/**
 * main - This file prints all alphabets in lower case
 * Return: 0 if success
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
