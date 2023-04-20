#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int x;
	int sum = 0;

	if( n == 0)
		return(0);


	va_start(add, n);

	for (i = 0; i < n ; i++)
	{
		x = va_arg(add , int);
		sum += x;
	}

	va_end(add);

	return sum;
}