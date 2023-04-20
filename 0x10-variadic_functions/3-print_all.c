#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0;
	char *s;
	char c;
	int num;
	float f;

	va_start(print, format);

	while (format && format[i])
	{
	switch (format[i])
        {
		case 'c':
		c = va_arg(print, int);
		printf("%c", c);
		break;

		case 'i':
		num = va_arg(print, int);
		printf("%d", num);
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
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
		printf(", ");

		i++;
	}

		printf("\n");
		va_end(print);
}
