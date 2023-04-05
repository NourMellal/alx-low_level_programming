#include "main.h"

int actual_prime(int n, int i);
/**
* is_prime_number - says if an integer is a prime number or not
* @n: number to
*
* Return: 1 if n is a prime number , 0 if not
*/


int is_prime_number(int n)
{
	return (actual_prime(n, 1));
}

/**
* actual_prime - calculate if a number is prime recursively
* @n: number to evaluate
* @i: iterator
*
* Return: 1 if n is prime, 0 if not
*/

int actual_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (actual_prime(n, i + 1));
}
