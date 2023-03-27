#include <stddef.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int result = 0, sign = 1, i = 0;
    
    if (s == NULL)
    {
        return 0;
    }

    while (s[i] == ' ')
    {
        i++;
    }

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            break;
        }

        i++;
    }

    return result * sign;
}
