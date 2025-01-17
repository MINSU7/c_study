#include <stdio.h>

#include "pizza.h"

int main () {
    printf("scan num : ");
    int n;
    scanf("%d",&n);
    int res = sum1toN(n);
    printf("sum of 1 to n is : %d \n",res);
    return 0;
}
