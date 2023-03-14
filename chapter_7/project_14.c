#include <stdio.h>
#include <math.h>

int main(void)
{
    double x; double y = 1, oldY = 0, xy, diff; 
    printf("Enter a positivie number: ");
    scanf("%lf", &x);

    while(1)  { 
        oldY = y;
        xy = x / y;
        y = (xy + y) / 2;
        printf("%lf\n", fabs(oldY - y));

        if (fabs(oldY - y) < 0.00001) { 
            break;
        }
    } 
    printf("Square root: %lf\n", y);

    return 0;

}