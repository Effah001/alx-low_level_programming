#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int *mul(int argc, char **argv)
{
	int *result;
	int i;
	int num1;
	int num2;
	char *num1_str;
	char *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	for (i = 0; num1_str[i] != '\0'; i++)
	{
	if (!isdigit(num1_str[i]))
	{
		printf("Error\n");
		exit(98);
	}
	}

	for (i = 0; num2_str[i] != '\0'; i++)
	{
	if (!isdigit(num2_str[i]))
	{
		printf("Error\n");
		exit(98);
	}
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = malloc(sizeof(int));
	if (result == NULL)
	{
	printf("Error\n");
	exit(98);
	}

	*result = num1 * num2;

	printf("%d\n", *result);

	return result;
}
