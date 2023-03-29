#include "main.h"

/**
 * prime_checker - checks if a number is prime
 *
 * @f: factor  used for checking
 * @pn: possible prime number
 *
 * Return: 1 if prime, 0 otherwise
 */

int prime_checker(int f, int pn)
{
	if (pn < 2 || pn % f == 0)
		return (0);
	else if (f > pn / 2)
		return (1);
	else
		return (prime_checker(f + 1, pn));
}

/**
* is_prime_number - States if number is prime
*
* @n: Number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_checker(2, n));
}
