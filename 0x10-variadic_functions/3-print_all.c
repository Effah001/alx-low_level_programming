#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list print;
	int x = 0;
	char *s;
	char *sep = "";

	va_start(print, format);

		
	while (format && format[x])
	{
	switch (format[x])
	{
		case 'c':
		printf("%s%c", sep,va_arg(print, int));
		break;

		case 'i':
		printf("%s%d", sep, va_arg(print, int));
		break;

		case 'f':
		printf("%s%f",sep, va_arg(print, double));
		break;

		case 's':
		s = va_arg(print, char *);
		if (s == NULL)
			printf("%s(nil)", sep);
		else
			printf("%s%s", sep, s);
		break;

		default:
		x++;
		continue;
	}
		sep = ", ";
		x++;
	}
	printf("\n");
	va_end(print);
}
