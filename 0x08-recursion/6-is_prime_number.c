#include "main.h"

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
