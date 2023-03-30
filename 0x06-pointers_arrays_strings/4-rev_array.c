#include "main.h"

/**
* reverse_array - reverse the numbers in an array
*@a : pointer to a integer
*@n : number of character in the string
* Return: nothing
*/

void reverse_array(int *a, int n)
{

	int i = 0;
	int j = n -1;
	int c;

	while (i < n / 2)
	{
		c = a[i];
		a[i] = a[j - i];
		a[j - i] = c;

	i++;
}
}
