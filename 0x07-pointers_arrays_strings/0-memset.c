#include "main.h"
/**
* _memset -  a function that fills memory with a constant byte
*@s : string to be filled
*@b : character to be filled inside the memory
*@n : number of memory space to be filled
*Return: s
*/


char* _memset(char* s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while(i < n)
	{
		s[i] = b;
		i++;
	}
	return s;
}
