#include <stdio.h>

/**
*print_array :print the values in an array
* Return: nothing
*/


void print_array(int *a, int n)
	{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i < n-1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
