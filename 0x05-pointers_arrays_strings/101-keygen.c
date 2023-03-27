#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[100];
    int i;

    srand(time(NULL));  
    
    for (i = 0; i < 10; i++)
    {
        int r = rand() % 62;

        if (r < 26) {
            password[i] = 'a' + r; 
        } else if (r < 52) {
            password[i] = 'A' + r - 26;  
        } else {
            password[i] = '0' + r - 52; 
        }
    }

    password[i] = '\0';  
    
    printf("%s\n", password);  
    
    return 0;
}
