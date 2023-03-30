#include "main.h"

/**
* replace_with_13th - reverse the numbers in an array
*@s : pointer to a character
* Return: nothing
*/

void replace_with_13th(char *s)
   {
    int i = 0;
    char c;

    while (s[i] != '\0') {
        c = s[i];
        if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		{
            c = c + 13;
		}
            else if (c > 'z') || (c > 'Z') {
                c = c - 26; // Wrap around to 'a'
            }
            s[i] = c;
        }
        i++;
    }
}
