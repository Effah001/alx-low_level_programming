#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    printf("Size of char: %ld bytes\n", sizeof(char));  
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long int: %ld bytes\n", sizeof(long));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of long long int: %ld bytes\n", sizeof(long double));
    return 0;
}
