#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int numOfVowels = 0;
    printf("Enter a sentence: ");
    char c;
    while((c = getchar()) != '\n') { 
        switch (toupper(c)) { 
            case 'A': case 'E': case 'I': case 'O': case 'U':
                numOfVowels++;
        }
    }    

    printf("Num of vowels: %d\n", numOfVowels);   
    return 0;
}