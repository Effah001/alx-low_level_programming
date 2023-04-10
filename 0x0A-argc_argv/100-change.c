#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
	int amount;
	int change = 0;
    
	if (argc != 2)
	{
	printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	
	if (amount < 0)
	{
	printf("0\n");
		return (0);
	}
	change = change + amount / 25;
	amount  = amount % 25;
	change += amount / 10;
	amount %= 10;
	amount += amount / 5;
	amount %= 5;
	change += amount / 2;
	amount %= 2;
	change += amount;
	printf("%d\n", change);
		return 0;
}
