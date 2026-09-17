#include <stdio.h>

int main(void) {

    int a,b;
    float result;

    printf("enter the numerator :");
    scanf("%d", &a);

    printf("enter the denominator :");
    scanf("%d", &b);

    result = (float)a/b;
    printf("the result of division is %f\n", result);

    return 0;
}