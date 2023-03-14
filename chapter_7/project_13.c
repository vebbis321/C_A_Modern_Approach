#include <stdio.h>

int main(void)
{   
    double len = 0.0;
    int words = 0;
    char ch;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') { 
        switch(ch) { 
            case ' ':
                words++;
                break;
            case '.':
                words++;
                len++;
                break;
            default:
                len++;
                break;
        }
    }

    printf("Average word length: %.1lf\n", len / words);
}