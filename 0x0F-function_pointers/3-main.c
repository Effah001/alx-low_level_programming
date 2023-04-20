#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*main - entry of the program
*@argc : argument count
*@argv : argument vector
*Return: Nothing
*/

int main(int __attribute__((unused)) argc, char *argv[])
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

	if (!op_func || ope[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if ((*ope == '/' || *ope == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
