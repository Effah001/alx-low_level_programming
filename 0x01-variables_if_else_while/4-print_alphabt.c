#include <stdio.h>

int main(void) {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
{
        if (ch != 'e' && ch != 'o')
{
            putchar(ch);
}
putchar("\n")
}
return (0);
}
