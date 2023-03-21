#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
    int i;

    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            int num = i;
            if (num < 0) {
                num = -num;
                putchar('-');
            }
            if (num >= 10) {
                putchar(num / 10 + '0');
            }
            putchar(num % 10 + '0');
            if (i < 98) {
                putchar(',');
                putchar(' ');
            }
        }
    } else {
        for (i = n; i >= 98; i--) {
            int num = i;
            if (num < 0) {
                num = -num;
                putchar('-');
            }
            if (num >= 10) {
                putchar(num / 10 + '0');
            }
            putchar(num % 10 + '0');
            if (i > 98) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
}
