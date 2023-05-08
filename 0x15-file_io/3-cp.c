#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

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
char buffer[1024];
size_t n_read, n_write;

f1 = fopen(file_from, "r");
	if (!f1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

f2 = fopen(file_to, "w");
	if (!f2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

chmod(file_to, 0664);

while ((n_read = fread(buffer, 1, sizeof(buffer), f1)) > 0)
{
	n_write = fwrite(buffer, 1, n_read, f2);
	if (n_write != n_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}
}

if (fclose(f1) == EOF)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_from);
	exit(100);
	}

if (fclose(f2) == EOF)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_from);
	exit(100);
	}
}
