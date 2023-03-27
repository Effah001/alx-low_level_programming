#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    srand(time(NULL));  
    char password[7]; 

    for (i = 0; i < 7; i++)
    {
        if (i == 6)
        {
            password[i] = '\0';
        }
        else
        {
            password[i] = rand() % 10 + 48;
        }
    }

    printf("%s", password);
    return 0;
}
