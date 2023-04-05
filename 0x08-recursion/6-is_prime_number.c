#include "main.h"
/**
* is_prime_number - a function that returns 1 if the input integer is prime
* is_prime_helper - a function that helps _is_prime_number
*@n: input number
*Return: Prime or not
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
