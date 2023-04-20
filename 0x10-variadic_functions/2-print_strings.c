#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - sum all the characters
*@n : number of arguments
*@separator : separation
*...: Variable number of parameters
*Return: none
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *s;

	va_start(print, n);

	for (i = 0; i < n ; i++)
	{
	s = va_arg(print, char*);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
	va_end(print);
}
