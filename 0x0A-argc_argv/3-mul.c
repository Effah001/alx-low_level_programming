#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies numbers
*@argc : arguments count
*@argv : argument vector
* Return: zero
*/


int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 1; i < argc; i++)
	{
		int m =  atoi(argv[i]);

		mul = mul * m;
	}

		printf("%d\n", mul);
		return (0);
}
