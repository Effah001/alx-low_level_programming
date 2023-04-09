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
	int x;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (x = 1; x < argc; x++)
	{
		int a = atoi(argv[x]);
		char *arg = argv[x];
		int y;
		
		for (y =0; arg[y] != '\0'; y++)
		{
			if(!isdigit(arg[y]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add = add + a;
	}

		printf("%d\n", add);
		return (0);
}
