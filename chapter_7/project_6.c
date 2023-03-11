#include <stdio.h>
#define NUM 1000
#define F_NUM 1000.f

int main(void)
{
    short si = NUM; int i = NUM; long li = NUM;
    float f = F_NUM; double d = F_NUM; long double ld = F_NUM;
    printf("%ld %ld %ld", sizeof(short), sizeof(int), sizeof(long int));
    printf("\n");
    
    printf("%ld %ld %ld", sizeof(float), sizeof(double), sizeof(long double));
    printf("\n");
    return 0;
}