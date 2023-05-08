#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUFSIZE 1024

char buffer[BUFSIZE];
size_t n;

void copy(char *file_from, char *file_to)

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}


FILE *f1 = fopen(from_to, "r");
	if (!f1)
	{
		printf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n", file_from)
		exit(98);
	}

FILE *f2 = fopen(from_to, "w");
	if (!f2)
	{
		printf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n", file_to)
		exit(99);
	}

chmod(file_to, S_ISUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

while ((n = fread(buffer, 1, BUFSIZE, from)) > 0)
{
	if (fwrite(b

