#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0;
	char *str;
	char cha;
	int inte;
	float float1;

	va_start(print, format);

	while (format && format[i])
	{
	switch (format[i])
        {
		case 'c':
		cha = va_arg(print, int);
		printf("%c", cha);
		break;

		case 'i':
		inte = va_arg(print, int);
		printf("%d", inte;
		break;

		case 'f':
		float1 = va_arg(print, double);
		printf("%f", float1);
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

		i++;
	}

	va_end(print);	
	printf("\n");

}
