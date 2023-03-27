#include <stdio.h>

/**
*print_array - print the values in an array
*@a : the pointer pointing to a
*@n : the length of the string
*Return: nothing
*/


void print_array(int *a, int n)
	{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
