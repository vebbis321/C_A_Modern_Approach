
#include <stdio.h>
#include <ctype.h>

int main(void) {

    int user_time,
        hour,
        minute,
        d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;
    char aOrP;
    char m = 0;
    char time2 = 0;

    printf("Enter a 12-hour time followed by A, P, AM, PM (upper/lower): ");
    scanf("%d :%d %c%c", &hour, &minute, &m, &time2);
    getchar();
    
    if (aOrP == 65 || m == 77 || aOrP == 80) { 
        time2 += (aOrP + 77);
    } else if (time == 97 || time == 109 || time == 112) { 
        time -= 32;
        time2 += time;
    }
    
    printf("Time %d\n", time2);
    printf("Closest departure time is ");
    switch (time2) { 
        case 80: case 157:
            user_time = (12 + hour) * 60 + minute;
        case 65: case 142:
            user_time = hour * 60 + minute;
        default:
            break;
    }

    if (user_time <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (user_time < d2 + (d3 - d2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (user_time < d3 + (d4 - d3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (user_time < d4 + (d5 - d4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (user_time < d5 + (d6 - d5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (user_time < d6 + (d7 - d6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (user_time < d7 + (d8 - d7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}