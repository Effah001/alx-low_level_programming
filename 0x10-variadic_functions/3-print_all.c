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

	va_start(print, format);

	if (format)
		
	while (format[x])
	{
	switch (format[x])
	{
		case 'c':
		c = va_arg(print, int);
		printf("%c", c);
		break;

		case 'i':
		i = va_arg(print, int);
		printf("%d", i);
		break;

		case 'f':
		f = va_arg(print, double);
		printf("%f", f);
		break;

		case 's':
		s = va_arg(print, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		break;

		default:
		break;
	}
		if (format[x + 1] && (format[x] == 'c' || format[x] == 'i' ||
		format[x] == 'f' || format[x] == 's'))
		printf(", ");

		x++;
	}

	va_end(print);
	printf("\n");

}
