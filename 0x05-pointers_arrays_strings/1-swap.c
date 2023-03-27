#include "main.h"
/**
* This file contains a function that swaps
*the values of two integer variables.
* swap_int : (int *a, int *b):  takes two integers and swap their values
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
