#include "main.h"

int is_prime_number(int n)
{
	int x;

	if (n < 2)
		return 0;

	for (x = 2; x < n; x++)
	{
	if (n % x == 0)
		return 0;
	}

	return 1;
}
