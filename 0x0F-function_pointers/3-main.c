#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *ope;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	ope = argv[2];
	num2 = atoi(argv[3]);
	
	op_func = get_op_func(ope);

	if (!op_func)
	{
		printf("Error\n");
		exit(98);
	}

	result = op_func(num1, num2);
	printf("%d\n",result);

	return 0;
}
