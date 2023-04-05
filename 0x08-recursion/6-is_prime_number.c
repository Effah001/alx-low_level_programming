#include "main.h"
/**
* is_prime_number - a function that returns 1 if the input integer
* is a prime number, otherwise return 0
* is_prime_helper - help prime_number
*/

int is_prime_number(int n)
{
	if (n < 2)
	return (0);
	return (is_prime_helper(n, 2));
}

int is_prime_helper(int n, int x)
{
	if (x >= n)
		return (1);
	if (n % x == 0)
		return (0);
	return (is_prime_helper(n, x + 1));
}
