#include <stdio.h>

int main(void)
{
    int n, n2, n3, n4, n5, n6, n7;
    short factShort = 1;
    int factor = 1;
    long longFactor = 1;
    long long longLongFactor = 1;
    float floatFactor = 1.f;
    double doubleFactor = 1;
    long double longDoubleFactor = 1;

    for (n = 1; factShort > 0; ++n, factShort *= n);
    for (n2 = 1; factor > 0; ++n2, factor *= n2);
    for (n3 = 1; longFactor > 0; ++n3, longFactor *= n3);
    for (n4 = 1; longLongFactor > 0; ++n4, longLongFactor *= n4);
    for (n5 = 1; ; ++n5, floatFactor *= n5) 
    // for (n6 = 1; doubleFactor > 0; ++n6, doubleFactor *= n6);
    // for (n7 = 1; longDoubleFactor > 0; ++n7, longDoubleFactor *= n7);

    printf("Largest value of n for short fact.: %d\n", n-1);
    printf("Largest value of n for int fact.: %d\n", n2-1);
    printf("Largest value of n for long int fact.: %d\n", n3-1);
    printf("Largest value of n for long long int fact.: %d\n", n4-1);
    printf("Largest value of n for float fact.: %d\n", n5-1);
    // printf("Largest value of n for double fact.: %d\n", n6-1);
    // printf("Largest value of n for long double fact.: %d\n", n7-1);

    return 0;
}