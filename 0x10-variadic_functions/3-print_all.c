#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list print;
	int x = 0;
	char *s;
	char c;
	int i;
	float f;
	char *sep = "";

	va_start(print, format);


		
	while (format && format[x])
	{
	switch (format[x])
	{
		case 'c':
		c = va_arg(print, int);
		printf("%S%c", sep,c);
		break;

		case 'i':
		i = va_arg(print, int);
		printf("%s%d", sep, i);
		break;

		case 'f':
		f = va_arg(print, double);
		printf("%s%f",sep,f);
		break;

		case 's':
		s = va_arg(print, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s%s", sep, s);
		break;

		default:
		x++;
		continue;
	}
		sep = ",";
		x++;
	}

	va_end(print);
	printf("\n");

}
