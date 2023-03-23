#include <stdio.h>
#include <math.h>

int getMaxPrimeFactor(int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
	max = 2;
	n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
	only odd numbers
	while (n % i == 0)
	{
	max = i;
	n = n / i;
	}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
}
