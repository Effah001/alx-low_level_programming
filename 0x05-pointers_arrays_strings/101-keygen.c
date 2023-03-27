#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));  
    int i;
    char password[7];   
    
    for (i = 0; i < 6; i++)
    {
        password[i] = rand() % 94 + 33; 
    }
    password[6] = '\0';  

    printf("%s\n", password);

    return 0;
}
