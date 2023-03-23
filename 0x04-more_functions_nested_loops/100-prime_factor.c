#include <stdio.h>
#include <math.h>

int getMaxPrimeFactor(int n)
{
<<<<<<< HEAD
	int i, max = -1;

	while (n % 2 == 0)
	{
	max = 2;
	n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
	only odd numbers
	while (n % i == 0)
	{
	max = i;
	n = n / i;
	}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
=======
   int i, max = -1;
   while(n % 2 == 0) 
   {
      max = 2;
      n = n/2; 
   }
   for(i = 3; i <= sqrt(n); i=i+2)
   { 
      while(n % i == 0) 
      {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) 
   {
      max = n;
   }
   return max;
>>>>>>> 726c08c869b94fd82d419c2efc43060a583651dd
}
