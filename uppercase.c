#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string before = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(before); i < n; i++)
    {
        //check for lowercase
        if (before[i] >= 'a' && before[i] <= 'z')
        {
            printf("%c", before[i] - 32);
        }
        //else if not lower case
        else
        {
            printf("%c", before[i]);
        }
        
    }
    printf("\n");
    
}