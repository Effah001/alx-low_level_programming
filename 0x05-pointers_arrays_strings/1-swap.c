#include "main.h"
/**
* swap_int(int *a, int *b):  takes two integers and swap their values 
*@a : first integer
*@b : second integer
* Return: nothing
*/

void swap_int(int *a, int *b)
	{
		int c;

		c = *a;
		*a = *b;
		*b = c;
}
