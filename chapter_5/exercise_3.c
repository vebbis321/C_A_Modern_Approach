#include <stdio.h>

int main(void)
{ 
    // a)
    int i = 3, j = 4, k = 5;
    printf("%d ", i < j || ++j < k); // 1
    printf("%d %d %d\n", i, j, k); // 3 5? 5

    return 0;
}