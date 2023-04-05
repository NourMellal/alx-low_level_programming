#include "main.h"

int prime(int n; int i);
/**
* is_prime_number - says if an integer is a prime number or not 
* @n: number to

*/


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

int is_prime_number(int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}