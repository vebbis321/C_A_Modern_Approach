#include <stdio.h>

int main(void)
{
    float sum = 0;
    float i = 1.0;
    char ch;

    while((ch = getchar()) != '\n') { 
        if (ch != '+' && ch != '/' && ch != '*' && ch != '-') { 
            if (ch == '.') {
                i = 0.1;
            }
            else if ((ch>= '0') && (ch <='9')) {
                if (i==1) {
                    sum *= 10;
                    sum += ch - '0';
                }
                else {
                    sum += (ch - '0') * i;
                    i /= 10;
                }
            }
        } else {
            if (ch == '.') {
                i = 0.1;
            }
            else if ((ch>= '0') && (ch <='9')) {
                if (i==1) {
                    sum *= 10;
                    if (ch =='+') { 
                        sum += ch - '0';
                    } else if (ch =='-') {
                        sum -= ch - '0';
                    }
                    ch =='*' && (sum *= ch - '0');
                    ch =='/' && (sum /= ch - '0');
                    
                }
                else {
                    ch =='+' && (sum += (ch - '0') * i);
                    ch =='-' && (sum -= (ch - '0') * i);
                    ch =='*' && (sum *= (ch - '0') * i);
                    ch =='/' && (sum /= (ch - '0') * i);
                    
                    i /= 10;
                }
            }
        }
    }

    printf("sum: %f\n", sum);
}