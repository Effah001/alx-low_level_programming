#include "main.h"
/**
* is_prime_number - a function that returns 1 if the input integer is prime
*@n: input number
* is_prime_helper - a function that helps _is_prime_number
*Return: Prime or not
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
	}

int is_prime_helper(int n, int i)
	{
	if (i == 1)
	{
	return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i - 1));
	}
}
