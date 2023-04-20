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

        if (separator == NULL)
                return;

        va_start(print, n);

        for (i = 0; i < n -1 ; i++)
        {
            printf("%d%s" ,va_arg(print, int), separator);
        }
            printf("%d\n", va_arg(print,int));
        
        va_end(print);
}
