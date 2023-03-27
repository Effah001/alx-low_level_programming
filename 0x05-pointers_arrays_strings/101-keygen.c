#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));  
    char password[7];   
    int i;

    for (i = 0; i < 6; i++)
    {
        password[i] = rand() % 94 + 33; 
    }
    password[6] = '\0';  

    printf("%s\n", password);

    return 0;
}
