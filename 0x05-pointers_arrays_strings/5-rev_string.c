#include "main.h"
/**
* reset_t:  resets the value of an integer pointer to 98
*@n : pointer to an integer to be reset
* Return: nothing
*/
	void rev_string(char *s)
	{
	 int len = 0;
	
	 while (s[len] != '\0')
	{
        len++;
	}
	
	for(int i = 0; i < len/2; i++)
	{
	char tmp = s[i];
	s[i] = s[len-i-1];
	s[len-i-1] = tmp;
	}
}
