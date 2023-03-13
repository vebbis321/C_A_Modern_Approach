#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char c, lastNameLetter;
    int len = 0;
    bool isFirstName = false;

    printf("Enter a first and a last name: ");

    while((c = getchar()) != '\n') { 
        len++;
        if (len == 1) { 
            lastNameLetter = c;
        }

        if (isFirstName) { 
            putchar(c);
        }

        if (!isFirstName) { 
            isFirstName = (c == ' ') ? true : false;
        }
    }

    printf(", %c.\n", lastNameLetter);

    return 0;
}