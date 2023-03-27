#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[7];

    srand(time(NULL)); 

    
    for (int i = 0; i < 6; i++)
    {
        int rand_num = rand() % 62;
        if (rand_num < 10)
        {
            password[i] = rand_num + 48; 
        }
        else if (rand_num < 36)
        {
            password[i] = rand_num + 55; 
        }
        else
        {
            password[i] = rand_num + 61; 
        }
    }
    password[6] = '\0'; 

    printf("%s\n", password); 

    return 0;
}
