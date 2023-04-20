#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *s;

	va_start(print, n);

	for (i = 0; i < n ; i++)
	{
	s = va_arg(print, char*);
		if(s == NULL)
		printf("nil");
		
		printf("%s" ,s);
		
		if(i != n - 1)
			printf("%s",separator);
	}
		printf("\n");

	va_end(print);
}
