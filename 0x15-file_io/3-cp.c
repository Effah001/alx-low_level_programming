#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void copy(char *file_from, char *file_to);

/**
*main - main function
*@argv : determin the arguments
*@argc : number of arguments
*Return: the number of characters
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}

/**
*copy - copy the function
*@file_from : pointer to file source file
*@file_to: pointer to file destination file
*Return: the number of characters
*/


void copy(char *file_from, char *file_to)
{
FILE *f1;
FILE *f2;
char *buffer[1024];
size_t n;

f1 = fopen(file_from, "r");
	if (!f1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE %s\n", file_from);
		exit(98);
	}

f2 = fopen(file_to, "w");
	if (!f2)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE %s\n", file_to);
		exit(99);
	}

chmod(file_to, 0664);

while ((n = fread(buffer, 1, buffer, f1)) > 0)
{
	fwrite(buffer, 1, n, f2);
}

if (fclose(f1) == EOF)
	{
	printf("Error: Can't close fd FD_VALUE %d\n", fileno(f1));
	exit(100);
	}

if (fclose(f2) == EOF)
	{
	printf("Error: Can't close fd FD_VALUE %d\n", fileno(f1));
	exit(100);
	}
}
