#include "main.h"
/**
* reset_to_98 :  resets the value of an integer pointer to 98
*@n : pointer to an integer to be reset
* Return: nothing
*/

	void puts_half(char *str)
	{
	int len = 0;
	while (str[len] != '\0')
	{
        len++;
	}
	int n = len / 2;
	if (len % 2 != 0)
	{
	n = (len - 1) / 2;
	}
	for (int i = n; i < len; i++);
        putchar(str[i]);
	}
	putchar('\n'); 
}
