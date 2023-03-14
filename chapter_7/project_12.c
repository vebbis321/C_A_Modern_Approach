#include <stdio.h>

int main(void)
{
    float sum = 0;
    float num = 0;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &sum);

    while((ch = getchar()) != '\n') { 
        
        switch (ch) {
            case '+':
                scanf("%f", &num);
                sum += num;
                break;
            case '-':
                scanf("%f", &num);
                sum -= num;
                break;
            case '*':
                scanf("%f", &num);
                sum *= num;
                break;
            case '/':
                scanf("%f", &num);
                sum /= num;
                break;
            default:
                continue;
        }
    }

   printf("Value of expression: %.2f\n", sum);
}