#include<stdio.h>
int main(){
    int q,r,dividend,divisor;

    printf("Enter Divided :");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    q = dividend / divisor;

    r=dividend% divisor;

    printf("Quotient = %d\n", q);
    printf("Remainder = %d", r);
    return 0;
}
