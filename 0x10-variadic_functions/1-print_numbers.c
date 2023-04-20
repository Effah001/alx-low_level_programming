#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
*print_numbers - sum all the characters
*@n : number of arguments
*...: Variable number of parameters
*Return: none
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

<<<<<<< HEAD
	if (separator == NULL)
	return;
=======
        
>>>>>>> fd303633a17c88ea848d70b5bcb0ba3c4a35977e

	va_start(print, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(print, int));
		if(i != (n-1) && separator != NULL)
		printf("%s", separator);
	}
		printf("\n");
		va_end(print);
}
