#include "main.h"

/**
 * void print_diagonal - prints a diagonal
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{

        int j;
        
        if (n <= 0){
        _putchar('\n');
}
        for (j = 0; j < n; j++)
        {
               for (i = 0; i < j; i++)
        _putchar(' ');
        
        }
                _putchar('\')
                _putchar('\n');
}   
