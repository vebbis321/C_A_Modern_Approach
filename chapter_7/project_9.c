#include <stdio.h>
#include <ctype.h>

int main(void) {

    int user_time,
        hour,
        minute;
    char aOrP;

    printf("Enter a 12-hour time followed by A, P, AM, PM (upper/lower): ");
    scanf("%d :%d %c", &hour, &minute, &aOrP);
    getchar(); // get rid of newline
    
    hour += (toupper(aOrP) == 65) ? 0 : 12;
    hour = hour == 24 ? 00: hour;
    printf("hour: %d\n", hour);

    printf("24 hour time: %02d:%02d\n", hour, minute);

    return 0;
}