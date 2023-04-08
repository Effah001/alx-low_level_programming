#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc,char * argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{	
		_puts("Error\n");
		return (1);
	}
	

	for(i = 1; i < argc; i++)
	{
		int m =  atoi(argv[i]);
		mul = mul * m;
	}
		
		_puts(itoa(null));
		return(0);
}
