#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list print;
	int x = 0;
	char *str;
	char c;
	int i;
	float f;

	va_start(print, format);

	while (format && format[x])
	{
	switch (format[x]
        {
		case 'c':
		cha = va_arg(print, int);
		printf("%c", c;
		break;

		case 'i':
		inte = va_arg(print, int);
		printf("%d", i);
		break;

		case 'f':
		float1 = va_arg(print, double);
		printf("%f", f);
		break;

		case 's':
		str = va_arg(print, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;

		default:
		break;
        }
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
		printf(", ");

		x++;
	}

	va_end(print);	
	printf("\n");

}
