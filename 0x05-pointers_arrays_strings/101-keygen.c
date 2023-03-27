#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[100];
    int i;

    srand(time(NULL));  // seed the random number generator with current time
    
    for (i = 0; i < 10; i++) {
        int r = rand() % 62;  // generate a random integer between 0 and 61
        
        if (r < 26) {
            password[i] = 'a' + r;  // add lowercase letter
        } else if (r < 52) {
            password[i] = 'A' + r - 26;  // add uppercase letter
        } else {
            password[i] = '0' + r - 52;  // add digit
        }
    }

    password[i] = '\0';  // terminate the string with null character
    
    printf("%s\n", password);  // print the generated password
    
    return 0;
}
