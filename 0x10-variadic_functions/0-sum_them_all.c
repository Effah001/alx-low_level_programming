#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sum all the characters
*@n : number of arguments
*@...: Variable number of parameters
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);

	return (sum);
}
