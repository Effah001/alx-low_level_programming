#include "main.h"

void reverse_array(int *a, int n)
{

	int i= 0;
	int j = n -1;
	int c;

	while ( i < n / 2)
	{

       		c = a[i];
		a[i] = a[j - i];
		a[j - i] = c;

	i++;
}
