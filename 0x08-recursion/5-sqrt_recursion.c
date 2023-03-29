#include "main.h"

/**
 * sqrt_checker - checks for the square root of no
 *
 * @guess: initial guess of square root of no
 * @no: number whose square root is to be found
 *
 * Return: square root ff no or -1
 */

int sqrt_checker(int guess, int no)
{
	if (guess * guess == no)
		return (guess);
	if (guess * guess > no)
		return (-1);
	return (sqrt_checker(guess + 1, no));
}

/**
 * _sqrt_recursion - returns natural square of a number
 *
 * @n: number to find squre root of
 * Return: natural squae root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);

	return (sqrt_checker(1, n));
}

