#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - add  numbers
*@argc : arguments count
*@argv : argument vector
* Return: zero
*/

int main(int argc, char *argv[])
{
	int add = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{

		int a = atoi(argv[i]);

		add = add + a;
	}

		printf("%d\n", add);
		return (0);
}
